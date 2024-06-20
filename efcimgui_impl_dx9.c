#include "efcimgui_impl_dx9.h"

#include <cimgui.h>

struct IDirect3DDevice9;

extern bool ImGui_ImplDX9_Init(IDirect3DDevice9 *device);
extern void ImGui_ImplDX9_Shutdown(void);
extern void ImGui_ImplDX9_NewFrame(void);
extern void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
extern bool ImGui_ImplDX9_CreateDeviceObjects(void);
extern void ImGui_ImplDX9_InvalidateDeviceObjects(void);

bool efcimgui_impl_dx9_init(void *device) {
    return ImGui_ImplDX9_Init((IDirect3DDevice9 *)device)
}

void efcimgui_impl_dx9_shutdown(void) {
    ImGui_ImplDX9_Shutdown();
}

void efcimgui_impl_new_frame(void) {
    ImGui_ImplDX9_NewFrame();
}

void efcimgui_impl_dx9_render_draw_data(void *draw_data) {
    ImGui_ImplDX9_RenderDrawData((ImDrawData *)draw_data);
}

bool efcimgui_impl_dx9_create_device_objects(void) {
    return ImGui_ImplDX9_CreateDeviceObjects();
}

void efcimgui_impl_dx9_invalidate_device_objects(void) {
    ImGui_ImplDX9_InvalidateDeviceObjects();
}
