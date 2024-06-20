#include "efcimgui_impl_dx9.h"

#include <cimgui.h>
#include <d3d9.h>

extern bool ImGui_ImplDX9_Init(struct IDirect3DDevice9* device);
extern void ImGui_ImplDX9_Shutdown();
extern void ImGui_ImplDX9_NewFrame();
extern void ImGui_ImplDX9_RenderDrawData(struct ImDrawData* draw_data);
extern bool ImGui_ImplDX9_CreateDeviceObjects();
extern void ImGui_ImplDX9_InvalidateDeviceObjects();
