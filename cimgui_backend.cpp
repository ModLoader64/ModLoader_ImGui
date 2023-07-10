#include "cimgui_backend.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_sdl2.h"

//// imgui_impl_opengl3
// Backend API
CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_Init(const char* glsl_version) {
    return ImGui_ImplOpenGL3_Init(glsl_version);
}

CIMGUI_API void     ImGuiBackend_ImplOpenGL3_Shutdown() {
    ImGui_ImplOpenGL3_Shutdown();
}

CIMGUI_API void     ImGuiBackend_ImplOpenGL3_NewFrame() {
    ImGui_ImplOpenGL3_NewFrame();
}

CIMGUI_API void     ImGuiBackend_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data) {
    ImGui_ImplOpenGL3_RenderDrawData(draw_data);
}

// (Optional) Called by Init/NewFrame/Shutdown
CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_CreateFontsTexture() {
    return ImGui_ImplOpenGL3_CreateFontsTexture();
}

CIMGUI_API void     ImGuiBackend_ImplOpenGL3_DestroyFontsTexture() {
    ImGui_ImplOpenGL3_DestroyFontsTexture();
}

CIMGUI_API bool     ImGuiBackend_ImplOpenGL3_CreateDeviceObjects() {
    return ImGui_ImplOpenGL3_CreateDeviceObjects();
}

CIMGUI_API void     ImGuiBackend_ImplOpenGL3_DestroyDeviceObjects() {
    ImGui_ImplOpenGL3_DestroyDeviceObjects();
}



//// imgui_impl_sld2
struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context) {
    return ImGui_ImplSDL2_InitForOpenGL(window, sdl_gl_context);
}

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForVulkan(SDL_Window* window) {
    return ImGui_ImplSDL2_InitForVulkan(window);
}

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForD3D(SDL_Window* window) {
    return ImGui_ImplSDL2_InitForD3D(window);
}

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForMetal(SDL_Window* window) {
    return ImGui_ImplSDL2_InitForMetal(window);
}

CIMGUI_API bool     ImGuiBackend_ImplSDL2_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer) {
    return ImGui_ImplSDL2_InitForSDLRenderer(window, renderer);
}

CIMGUI_API void     ImGuiBackend_ImplSDL2_Shutdown() {
    ImGui_ImplSDL2_Shutdown();
}

CIMGUI_API void     ImGuiBackend_ImplSDL2_NewFrame() {
    ImGui_ImplSDL2_NewFrame();
}

CIMGUI_API bool     ImGuiBackend_ImplSDL2_ProcessEvent(const SDL_Event* event) {
    ImGui_ImplSDL2_ProcessEvent(event);
}


