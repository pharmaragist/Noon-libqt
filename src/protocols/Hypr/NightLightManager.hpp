#pragma once

#include "base.hpp"

#include <QTimer>
#include <QVariant>

#include <array>
#include <deque>
#include <memory>
#include <string>

#include <wayland-client.h>

#include "hyprland-ctm-control-v1.hpp"

// NightLightManager: blue-light filter for Hyprland via the hyprland-ctm-control-v1
// protocol. Applies a 3x3 CTM (color temp + gamma), exactly like hyprsunset but without
// a separate daemon -- a plain QML-instantiable QObject.
class NightLightManager : public QObject {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(QObject* screen    READ screen    WRITE setScreen    NOTIFY screenChanged)
    Q_PROPERTY(int  temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(double gamma      READ gamma      WRITE setGamma      NOTIFY gammaChanged)
    Q_PROPERTY(bool  identity    READ identity    WRITE setIdentity    NOTIFY identityChanged)
    Q_PROPERTY(bool  available   READ available   NOTIFY availableChanged)
    Q_PROPERTY(bool  enabled     READ enabled     WRITE setEnabled     NOTIFY enabledChanged)

public:
    explicit NightLightManager(QObject* parent = nullptr);
    ~NightLightManager() override;

    // hyprsunset's temperature->RGB matrix (Tanner Helland). Row-major diagonal.
    static std::array<float, 9> matrixForKelvin(int kelvin);

    QObject* screen()    const { return m_screen; }
    int   temperature() const { return m_temperature; }
    double gamma()       const { return m_gamma; }
    bool  identity()     const { return m_identity; }
    bool  available()    const { return m_available; }
    bool  enabled()      const { return m_enabled; }

    void setScreen(QObject* s);
    void setTemperature(int v);
    void setGamma(double v);
    void setIdentity(bool v);
    void setEnabled(bool v);

signals:
    void screenChanged();
    void temperatureChanged();
    void gammaChanged();
    void identityChanged();
    void availableChanged();
    void enabledChanged();

private:
    struct Output {
        wl_proxy*   proxy;
        std::string name;
    };

    static void outGeo(void*, wl_output*, int32_t, int32_t, int32_t, int32_t, int32_t,
                       const char*, const char*, int32_t);
    static void outMode(void*, wl_output*, uint32_t, int32_t, int32_t, int32_t);
    static void outDone(void*, wl_output*);
    static void outScale(void*, wl_output*, int32_t);
    static void outName(void* d, wl_output*, const char* n);
    static void outDescription(void*, wl_output*, const char*);
    static constexpr wl_output_listener outListener = { outGeo, outMode, outDone, outScale, outName, outDescription };

    void resetRegistryListener();
    void onGlobal(wl_registry* r, uint32_t name, const char* iface, uint32_t version);

    void scheduleRetry();
    void retryBind();
    void finishBind();
    void apply();

    wl_display* m_display = nullptr;
    wl_registry* m_registry = nullptr;
    QObject* m_screen = nullptr;
    std::deque<Output> m_outputs;
    std::unique_ptr<CCHyprlandCtmControlManagerV1> m_manager;
    QTimer m_retry;
    int    m_temperature = 6000;
    double m_gamma       = 1.0;
    bool   m_identity    = false;
    bool   m_available   = false;
    bool   m_enabled     = true;
};
