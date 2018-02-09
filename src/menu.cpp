// menu.cpp
// Author: Ian Bowling (hellomotolegacy)

//Libraries
#include <stdio.h>
#include <SDL2/SDL.h>

void DrawMenu()
{
	const Uint8 *keys = SDL_GetKeyboardState(NULL);
	if (keys[SDL_SCANCODE_A])
		printf("move left pls kthx :D\n");
}