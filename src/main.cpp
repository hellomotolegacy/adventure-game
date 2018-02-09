// main.cpp
// Author: Ian Bowling (hellomotolegacy)

#include <stdio.h>
#include <SDL2/SDL.h>
int main()
{
	SDL_Window *window;
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("An SDL Window..", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
	if (window == NULL) {
		printf("Window failed to be created.. (%s)", SDL_GetError());
		return 1;
	}
	SDL_Delay(3000);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}