#pragma once

#include "base.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <memory>
#include <vector>

#include <wayland-client.h>

#include "hyprland-ctm-control-v1.hpp"

// NightLightManager: blue-light filter for Hyprland via the hyprland-ctm-control-v1
// protocol. Binds each wl_output and applies a 3x3 CTM (color temp + gamma), exactly like
// hyprsunset but without a separate daemon -- a plain QML-instantiable QObject.

class NightLightManager : public QObject {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(int  temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(double gamma      READ gamma      WRITE setGamma      NOTIFY gammaChanged)
    Q_PROPERTY(bool  identity    READ identity    WRITE setIdentity    NOTIFY identityChanged)
    Q_PROPERTY(bool  available   READ available   NOTIFY availableChanged)
    Q_PROPERTY(bool  enabled     READ enabled     WRITE setEnabled     NOTIFY enabledChanged)

public:
    explicit NightLightManager(QObject* parent = nullptr) : QObject(parent) {
        m_display = wl_display_connect(nullptr);
        if (!m_display) return;

        auto* registry = wl_display_get_registry(m_display);
        static const wl_registry_listener listener = {
            .global = [](void* data, wl_registry* r, uint32_t name, const char* iface, uint32_t version) {
                static_cast<NightLightManager*>(data)->onGlobal(r, name, iface, version);
            },
            .global_remove = [](void*, wl_registry*, uint32_t) {},
        };
        wl_registry_add_listener(registry, &listener, this);
        wl_display_roundtrip(m_display); // collect globals
        wl_display_roundtrip(m_display); // process manager bind + blocked event

        m_available = (m_manager != nullptr);
        if (m_available) apply();
        emit availableChanged();
    }

    ~NightLightManager() override {
        // ponytail: destroy the manager proxy *before* tearing down the connection;
        // marshalling after wl_display_disconnect segfaults in libwayland's proxy_destroy.
        m_manager.reset();
        if (m_display) wl_display_disconnect(m_display);
    }

    int   temperature() const { return m_temperature; }
    double gamma()       const { return m_gamma; }
    bool  identity()     const { return m_identity; }
    bool  available()    const { return m_available; }
    bool  enabled()      const { return m_enabled; }

    void setTemperature(int v) { if (v == m_temperature) return; m_temperature = v; emit temperatureChanged(); apply(); }
    void setGamma(double v)    { if (v == m_gamma) return; m_gamma = v; emit gammaChanged(); apply(); }
    void setIdentity(bool v)   { if (v == m_identity) return; m_identity = v; emit identityChanged(); apply(); }
    void setEnabled(bool v)    { if (v == m_enabled) return; m_enabled = v; emit enabledChanged(); apply(); }

signals:
    void temperatureChanged();
    void gammaChanged();
    void identityChanged();
    void availableChanged();
    void enabledChanged();

public:
    // hyprsunset's temperature->RGB matrix (Tanner Helland). Row-major diagonal.
    // Public so the self-check can assert on it.
    static std::array<float, 9> matrixForKelvin(int kelvin) {
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

private:
    void onGlobal(wl_registry* r, uint32_t name, const char* iface, uint32_t version) {
        if (std::strcmp(iface, hyprland_ctm_control_manager_v1_interface.name) == 0) {
            auto* proxy = (wl_proxy*)wl_registry_bind(r, name, &hyprland_ctm_control_manager_v1_interface, std::min(version, 2u));
            m_manager = std::make_unique<CCHyprlandCtmControlManagerV1>(proxy);
            if (m_manager->version() >= 2)
                m_manager->setBlocked([this](CCHyprlandCtmControlManagerV1*) {
                    // Another manager already holds the CTM; give up cleanly.
                    m_available = false;
                    emit availableChanged();
                });
        } else if (std::strcmp(iface, wl_output_interface.name) == 0) {
            m_outputs.push_back((wl_proxy*)wl_registry_bind(r, name, &wl_output_interface, 3));
        }
    }

    void apply() {
        if (!m_available) return;
        auto mat = (!m_enabled || m_identity) ? std::array<float, 9>{1, 0, 0,  0, 1, 0,  0, 0, 1}
                                              : matrixForKelvin(m_temperature);
        const float g = (float)m_gamma;
        for (auto& c : mat) c *= g;

        for (auto* out : m_outputs)
            m_manager->sendSetCtmForOutput(out,
                wl_fixed_from_double(mat[0]), wl_fixed_from_double(mat[1]), wl_fixed_from_double(mat[2]),
                wl_fixed_from_double(mat[3]), wl_fixed_from_double(mat[4]), wl_fixed_from_double(mat[5]),
                wl_fixed_from_double(mat[6]), wl_fixed_from_double(mat[7]), wl_fixed_from_double(mat[8]));
        m_manager->sendCommit();
        if (m_display) wl_display_flush(m_display);
    }

    wl_display* m_display = nullptr;
    std::vector<wl_proxy*> m_outputs;
    std::unique_ptr<CCHyprlandCtmControlManagerV1> m_manager;
    int    m_temperature = 6000;
    double m_gamma       = 1.0;
    bool   m_identity    = false;
    bool   m_available   = false;
    bool   m_enabled     = true;
};
