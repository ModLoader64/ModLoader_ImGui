#ifndef CIMGUI_BACKEND_H
#define CIMGUI_BACKEND_H

#include "cimgui.h" // IMGUI_IMPL_API

//// imgui_impl_opengl3
// Backend API
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);

// (Optional) Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();


/// imgui_impl_sld2
struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;

IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForVulkan(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForD3D(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForMetal(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer);
IMGUI_IMPL_API void     ImGui_ImplSDL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplSDL2_NewFrame();
IMGUI_IMPL_API bool     ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);

#endif

