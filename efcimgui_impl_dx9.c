#include "efcimgui_impl_dx9.h"

static int _efcimgui_impl_dx9_init(void *device);
extern void ImGui_ImplDX9_Shutdown(void);
extern void ImGui_ImplDX9_NewFrame(void);
static void _efcimgui_impl_dx9_render_draw_data(void* draw_data);
static int _efcimgui_impl_dx9_create_device_objects(void);
extern void ImGui_ImplDX9_InvalidateDeviceObjects(void);

bool efcimgui_impl_dx9_init(void *device) {
    return (bool)_efcimgui_impl_dx9_init(device)
}

void efcimgui_impl_dx9_shutdown(void) {
    ImGui_ImplDX9_Shutdown();
}

void efcimgui_impl_new_frame(void) {
    ImGui_ImplDX9_NewFrame();
}

void efcimgui_impl_dx9_render_draw_data(void *draw_data) {
    _efcimgui_impl_dx9_render_draw_data(draw_data);
}

bool efcimgui_impl_dx9_create_device_objects(void) {
    return (bool)_efcimgui_impl_dx9_create_device_objects();
}

void efcimgui_impl_dx9_invalidate_device_objects(void) {
    ImGui_ImplDX9_InvalidateDeviceObjects();
}

#include <cimgui.h>

struct IDirect3DDevice9;

extern bool ImGui_ImplDX9_Init(IDirect3DDevice9 *device);
extern void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
extern bool ImGui_ImplDX9_CreateDeviceObjects(void);

static int _efcimgui_impl_dx9_init(void *device) {
    return (int)ImGui_ImplDX9_Init((IDirect3DDevice9 *)device);
}

static void _efcimgui_impl_dx9_render_draw_data(void* draw_data) {
    ImGui_ImplDX9_RenderDrawData((ImDrawData *)draw_data);
}

static int _efcimgui_impl_dx9_create_device_objects(void) {
    return (int)ImGui_ImplDX9_CreateDeviceObjects();
}
