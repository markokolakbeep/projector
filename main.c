#include <SDL2/SDL.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window window = SDL_CreateWindow("3d projector",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800, 600,SDL_WINDOW_SHOWN);
    SDL_delay(4000);
    SDl_DestroyWindow(window);
    SDl_Quit();
    return 0;
}
