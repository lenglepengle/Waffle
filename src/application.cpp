#include "application.hpp"

#include <SDL3/SDL.h>
#include <vulkan/vulkan.h>

bool Application::init()
{
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Waffle Test", width, height, SDL_WINDOW_VULKAN);
    return true;
}

void Application::run()
{
    bool running = true;
    while (running)
    {
        SDL_Event event{ 0 };   //spacing for some reason is important here
        while (SDL_PollEvent(&event))
        {
            if (event.type = SDL_EVENT_QUIT) 
            {
                running = false;
                break;
            }
        }
    }
}

void Application::close()
{
    if (window) //truthy values are so cool, IMO
    {
        SDL_DestroyWindow(window);
    }
}