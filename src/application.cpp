#include "application.hpp"

#include <SDL3/SDL.h>
#define VOLK_IMPLEMENTATION
#include <volk.h> //I'm not sure if this is right, but this is what autofill gave me

//I don't feel like importing string
void Application::showError(const char* &errorMessage) const //trailing const protects the rest of Application
{
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", errorMessage, window);
}

bool Application::init()
{
    if (SDL_InitSubSystem(SDL_INIT_VIDEO))
    {
        window = SDL_CreateWindow("Waffle Test", width, height, SDL_WINDOW_VULKAN | sdl_window);

        if (!window) //window hasn't a value
        {
            showError("Window create error");
            return false;
        }

        if (!initVulkan())
        {
            return false;
        }

        else
        {
            showError("SDL3 init error");
            return false;
        }

        return true;
    }
}

void Application::run()
{
    bool running = true;
    while (running)
    {
        SDL_Event event{0};
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                running = false;
                break;
            }

            else if (event.type == SDL_EVENT_WINDOW_RESIZED)
            {
                width = event.window.data1;
                height = event.window.data2;
                break;
            }
            
        }

        render();
    }
    
}

void Application::shutdown();

bool initVulkan()
{
    if (!createVulkanInstance())
    {
        showError("vulkan instance create error");
        return false;
    }
}

bool Application::createVulkanInstance()
{
    if (volkInitialize() != VK_SUCCESS)//for some reason, volk uses vk success
    {
        showError("volk init error");
    }
}