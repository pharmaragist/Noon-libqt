#include "NightLightManager.hpp"

#include <cstring>

NightLightManager::NightLightManager(QObject* parent) : QObject(parent) {
    m_display = wl_display_connect(nullptr);
    if (!m_display) return;

    connect(&m_retry, &QTimer::timeout, this, [this] {
        m_retry.stop();
        retryBind();
    });

    m_registry = wl_display_get_registry(m_display);
    resetRegistryListener();
    wl_display_roundtrip(m_display);
    wl_display_roundtrip(m_display);

    finishBind();
    if (!m_available) scheduleRetry();
    emit availableChanged();
}

NightLightManager::~NightLightManager() {
    m_retry.stop();
    // ponytail: destroy the manager proxy *before* tearing down the connection;
    // marshalling after wl_display_disconnect segfaults in libwayland's proxy_destroy.
    m_manager.reset();
    if (m_display) wl_display_disconnect(m_display);
}

std::array<float, 9> NightLightManager::matrixForKelvin(int kelvin) {
    float r = 1.F, g = 1.F, b = 1.F;
    float t = kelvin / 100.F;
    if (t <= 66) {
        r = 255;
        g = std::clamp(99.4708025861F * std::log(t) - 161.1195681661F, 0.F, 255.F);
        b = t <= 19 ? 0.F : std::clamp(std::log(t - 10) * 138.5177312231F - 305.0447927307F, 0.F, 255.F);
    } else {
        r = std::clamp(329.698727446F * std::pow(t - 60, -0.1332047592F), 0.F, 255.F);
        g = std::clamp(288.1221695283F * std::pow(t - 60, -0.0755148492F), 0.F, 255.F);
        b = 255;
    }
    return {r / 255.F, 0, 0,  0, g / 255.F, 0,  0, 0, b / 255.F};
}

void NightLightManager::setScreen(QObject* s) {
    if (m_screen == s) return;
    if (m_screen) QObject::disconnect(m_screen, nullptr, this, nullptr);
    m_screen = s;
    if (m_screen) connect(m_screen, &QObject::destroyed, this, [this] { m_screen = nullptr; });
    emit screenChanged();
    apply();
}
void NightLightManager::setTemperature(int v) { if (v == m_temperature) return; m_temperature = v; emit temperatureChanged(); apply(); }
void NightLightManager::setGamma(double v)    { if (v == m_gamma) return; m_gamma = v; emit gammaChanged(); apply(); }
void NightLightManager::setIdentity(bool v)   { if (v == m_identity) return; m_identity = v; emit identityChanged(); apply(); }
void NightLightManager::setEnabled(bool v)    { if (v == m_enabled) return; m_enabled = v; emit enabledChanged(); apply(); }

void NightLightManager::outGeo(void*, wl_output*, int32_t, int32_t, int32_t, int32_t, int32_t,
                               const char*, const char*, int32_t) {}
void NightLightManager::outMode(void*, wl_output*, uint32_t, int32_t, int32_t, int32_t) {}
void NightLightManager::outDone(void*, wl_output*) {}
void NightLightManager::outScale(void*, wl_output*, int32_t) {}
void NightLightManager::outName(void* d, wl_output*, const char* n) {
    auto* o = static_cast<Output*>(d); o->name = n ? n : "";
}
void NightLightManager::outDescription(void*, wl_output*, const char*) {}

void NightLightManager::resetRegistryListener() {
    static const wl_registry_listener listener = {
        .global = [](void* data, wl_registry* r, uint32_t name, const char* iface, uint32_t version) {
            static_cast<NightLightManager*>(data)->onGlobal(r, name, iface, version);
        },
        .global_remove = [](void*, wl_registry*, uint32_t) {},
    };
    wl_registry_add_listener(m_registry, &listener, this);
}

void NightLightManager::onGlobal(wl_registry* r, uint32_t name, const char* iface, uint32_t version) {
    if (std::strcmp(iface, hyprland_ctm_control_manager_v1_interface.name) == 0) {
        auto* proxy = (wl_proxy*)wl_registry_bind(r, name, &hyprland_ctm_control_manager_v1_interface, std::min(version, 2u));
        m_manager = std::make_unique<CCHyprlandCtmControlManagerV1>(proxy);
        if (m_manager->version() >= 2)
            m_manager->setBlocked([this](CCHyprlandCtmControlManagerV1*) {
                m_available = false;
                emit availableChanged();
                scheduleRetry();
            });
    } else if (std::strcmp(iface, wl_output_interface.name) == 0) {
        m_outputs.emplace_back();
        Output& o = m_outputs.back();
        o.proxy = (wl_proxy*)wl_registry_bind(r, name, &wl_output_interface, std::min(version, 4u));
        wl_proxy_add_listener(o.proxy, (void (**)(void))&outListener, &o);
    }
}

void NightLightManager::scheduleRetry() {
    // Keep retrying until we own the single-winner CTM manager. Hot-reload destroys the
    // old manager asynchronously, so the race can outlast a few attempts; only stop once
    // hooked (m_available true) or on shutdown.
    if (m_retry.isActive() || m_available) return;
    m_retry.start(500);
}

void NightLightManager::retryBind() {
    if (m_available) return;
    m_manager.reset();
    for (auto& o : m_outputs)
        wl_proxy_destroy(o.proxy);
    m_outputs.clear();
    if (m_registry) wl_registry_destroy(m_registry);
    m_registry = wl_display_get_registry(m_display);
    resetRegistryListener();
    wl_display_roundtrip(m_display);
    wl_display_roundtrip(m_display);
    finishBind();
    if (!m_available) scheduleRetry();
}

void NightLightManager::finishBind() {
    m_available = (m_manager != nullptr);
    if (m_available)
        apply();
    emit availableChanged();
}

void NightLightManager::apply() {
    if (!m_available) return;
    // Disabled resets to pure identity; gamma only scales an active filter.
    const bool reset = !m_enabled || m_identity;
    auto mat = reset ? std::array<float, 9>{1, 0, 0,  0, 1, 0,  0, 0, 1}
                     : matrixForKelvin(m_temperature);
    if (!reset) {
        const float g = (float)m_gamma;
        for (auto& c : mat) c *= g;
    }

    const std::string want = m_screen ? m_screen->property("name").toString().toStdString() : std::string{};
    bool matched = false;
    if (!want.empty())
        for (auto& out : m_outputs) if (out.name == want) { matched = true; break; }
    for (auto& out : m_outputs) {
        if (!want.empty() && matched && out.name != want) continue;
        m_manager->sendSetCtmForOutput(out.proxy,
            wl_fixed_from_double(mat[0]), wl_fixed_from_double(mat[1]), wl_fixed_from_double(mat[2]),
            wl_fixed_from_double(mat[3]), wl_fixed_from_double(mat[4]), wl_fixed_from_double(mat[5]),
            wl_fixed_from_double(mat[6]), wl_fixed_from_double(mat[7]), wl_fixed_from_double(mat[8]));
    }
    m_manager->sendCommit();
    if (m_display) wl_display_flush(m_display);
}
