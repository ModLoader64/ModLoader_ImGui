#ifndef CIMGUI_BACKEND_H
#define CIMGUI_BACKEND_H

#include "cimgui.h" // CIMGUI_API

//// imgui_impl_opengl3
// Backend API
CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_Init(const char* glsl_version);
CIMGUI_API void     ImGuiBackend_ImplOpenGL3_Shutdown();
CIMGUI_API void     ImGuiBackend_ImplOpenGL3_NewFrame();
CIMGUI_API void     ImGuiBackend_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);

// (Optional) Called by Init/NewFrame/Shutdown
CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_CreateFontsTexture();
CIMGUI_API void     ImGuiBackend_ImplOpenGL3_DestroyFontsTexture();
CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_CreateDeviceObjects();
CIMGUI_API void     ImGuiBackend_ImplOpenGL3_DestroyDeviceObjects();


//// imgui_impl_sld2
struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context);
CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForVulkan(SDL_Window* window);
CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForD3D(SDL_Window* window);
CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForMetal(SDL_Window* window);
CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer);
CIMGUI_API void     ImGuiBackend_ImplSDL2_Shutdown();
CIMGUI_API void     ImGuiBackend_ImplSDL2_NewFrame();
CIMGUI_API bool     ImGuiBackend_ImplSDL2_ProcessEvent(const SDL_Event* event);

#endif

