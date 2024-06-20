#ifndef _EFCIMGUI_IMPL_DX9
#define _EFCIMGUI_IMPL_DX9

#include <stdbool.h>

bool efcimgui_impl_dx9_init(void *device);
void efcimgui_impl_dx9_shutdown(void);
void efcimgui_impl_new_frame(void);
void efcimgui_impl_dx9_render_draw_data(void *draw_data);
bool efcimgui_impl_dx9_create_device_objects(void);
void efcimgui_impl_dx9_invalidate_device_objects(void);

#endif
