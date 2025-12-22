#include <SDL2/SDL.h>
#include <stdlib.h>

#define WIDTH 800
#define HEIGHT 600

int main(int argc, char* argv[])
{
	  int running = 1;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("3d projector",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT,SDL_WINDOW_SHOWN);

    SDL_Rect rect = {(WIDTH/2) -50, (HEIGHT/2) - 50 , 100, 100};
    SDL_Surface *screenSurface = SDL_GetWindowSurface(window);
    SDL_UpdateWindowSurface(window);  
    SDL_Event event; 
    
    while(running) {
      while (SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT) {
          running = 0;
        }
      
        SDL_FillRect(screenSurface, &rect, SDL_MapRGB(screenSurface -> format, 0xff, 0xff, 0xff));     
        SDL_UpdateWindowSurface(window);
      }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
