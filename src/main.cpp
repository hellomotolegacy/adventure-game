// main.cpp
// Author: Ian Bowling (hellomotolegacy)

//Libraries
#include <stdio.h>
#include <SDL2/SDL.h>

//Local headers
#include "states.h"
#include "menu.h"

SDL_Window *window;
SDL_Renderer *bg;

void CreateWindow()
{
	window = SDL_CreateWindow("Adventure", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
	if (window == NULL) {
		printf("Window failed to be created.. (%s)", SDL_GetError());
		SDL_Quit();
	}
	bg = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(bg, 0, 0, 0, 255);
	SDL_RenderClear(bg);
	SDL_RenderPresent(bg);
}

int main()
{
	bool quit = false;
	SDL_Init(SDL_INIT_VIDEO);
	CreateWindow();
	while (!quit) {
		SDL_Event mainEvent;
		while (SDL_PollEvent(&mainEvent)) {
			if (mainEvent.type == SDL_QUIT)
				quit = true;
			switch(gameState) {
				case STATE_MENU:
					DrawMenu();
			}
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
