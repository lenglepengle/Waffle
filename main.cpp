//following https://github.com/nickenchev/modern-vulkan/blob/lesson_01/src/application.cpp
//not sure why he uses h instead of hpp, but I'll use hpp
#include <SDL3/SDL_main.h>
#include "application.hpp"

int main(int argc, char *argv[]) // apparently this is the best practice for game engines
{
    Application app;
    if(app.init())
    {
        app.run();
    }
    app.close();
    return 0;
}