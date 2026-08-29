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

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "hyprland-ctm-control-v1.hpp"
#undef private
#define F std::function

static const wl_interface* hyprlandCtmControlV1_dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface hyprland_ctm_control_manager_v1_interface;
extern const wl_interface wl_output_interface;

static void _CHyprlandCtmControlManagerV1Blocked(void* data, void* resource) {
    const auto PO = (CCHyprlandCtmControlManagerV1*)data;
    if (PO && PO->requests.blocked)
        PO->requests.blocked(PO);
}

static const void* _CCHyprlandCtmControlManagerV1VTable[] = {
    (void*)_CHyprlandCtmControlManagerV1Blocked,
};

void CCHyprlandCtmControlManagerV1::sendSetCtmForOutput(wl_proxy* output, wl_fixed_t mat0, wl_fixed_t mat1, wl_fixed_t mat2, wl_fixed_t mat3, wl_fixed_t mat4, wl_fixed_t mat5, wl_fixed_t mat6, wl_fixed_t mat7, wl_fixed_t mat8) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags(pResource, 0, nullptr, wl_proxy_get_version(pResource), 0, output, mat0, mat1, mat2, mat3, mat4, mat5, mat6, mat7, mat8);
    proxy;
}

void CCHyprlandCtmControlManagerV1::sendCommit() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags(pResource, 1, nullptr, wl_proxy_get_version(pResource), 0);
    proxy;
}

void CCHyprlandCtmControlManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags(pResource, 2, nullptr, wl_proxy_get_version(pResource), 1);
    proxy;
}
static const wl_interface* _CHyprlandCtmControlManagerV1SetCtmForOutputTypes[] = {
    &wl_output_interface,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CHyprlandCtmControlManagerV1Requests[] = {
    { .name = "set_ctm_for_output", .signature = "offfffffff", .types = _CHyprlandCtmControlManagerV1SetCtmForOutputTypes + 0},
    { .name = "commit", .signature = "", .types = hyprlandCtmControlV1_dummyTypes + 0},
    { .name = "destroy", .signature = "", .types = hyprlandCtmControlV1_dummyTypes + 0},
};

static const wl_message _CHyprlandCtmControlManagerV1Events[] = {
    { .name = "blocked", .signature = "", .types = hyprlandCtmControlV1_dummyTypes + 0},
};

const wl_interface hyprland_ctm_control_manager_v1_interface = {
    .name = "hyprland_ctm_control_manager_v1", .version = 2,
    .method_count = 3, .methods = _CHyprlandCtmControlManagerV1Requests,
    .event_count = 1, .events = _CHyprlandCtmControlManagerV1Events,
};

CCHyprlandCtmControlManagerV1::CCHyprlandCtmControlManagerV1(wl_proxy* resource) : pResource(resource) {

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCHyprlandCtmControlManagerV1VTable, this);
}

CCHyprlandCtmControlManagerV1::~CCHyprlandCtmControlManagerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCHyprlandCtmControlManagerV1::setBlocked(F<void(CCHyprlandCtmControlManagerV1*)> &&handler) {
    requests.blocked = std::move(handler);
}

#undef F
