// Generated with hyprwayland-scanner 0.4.6. Made with vaxry's keyboard and ❤️.
// hyprland_ctm_control_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2024 Vaxry
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its
       contributors may be used to endorse or promote products derived from
       this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
    SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  
*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum hyprlandCtmControlManagerV1Error : uint32_t {
    HYPRLAND_CTM_CONTROL_MANAGER_V1_ERROR_INVALID_MATRIX = 0,
};


class CCHyprlandCtmControlManagerV1;
class CCWlOutput;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface hyprland_ctm_control_manager_v1_interface;

#endif


class CCHyprlandCtmControlManagerV1 {
  public:
    CCHyprlandCtmControlManagerV1(wl_proxy*);
    ~CCHyprlandCtmControlManagerV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setBlocked(F<void(CCHyprlandCtmControlManagerV1*)> &&handler);

    // --------------- Events --------------- //

    void sendSetCtmForOutput(wl_proxy*, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t);
    void sendCommit();
    void sendDestroy();

  private:
    struct {
        F<void(CCHyprlandCtmControlManagerV1*)> blocked;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
