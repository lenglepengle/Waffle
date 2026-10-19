#pragma once

//this variable name is case-sensitive
struct SDL_Window;

class Application
{
    SDL_Window* window = nullptr;
    int width = 1280;
    int height = 720;
public: //only the functions that need to be public are made public
    bool init();
    void run();
    void close();
};