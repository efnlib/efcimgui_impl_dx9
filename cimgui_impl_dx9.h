#ifndef _CIMGUI_IMPL_DX9
#define _CIMGUI_IMPL_DX9

#include <cimgui.h>
#include <d3d9.h>

extern bool ImGui_ImplDX9_Init(struct IDirect3DDevice9* device);
extern void ImGui_ImplDX9_Shutdown();
extern void ImGui_ImplDX9_NewFrame();
extern void ImGui_ImplDX9_RenderDrawData(struct ImDrawData* draw_data);
extern bool ImGui_ImplDX9_CreateDeviceObjects();
extern void ImGui_ImplDX9_InvalidateDeviceObjects();

#endif
