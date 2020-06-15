#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void init(char *title, int xpos, int ypos, int width, int height, int fullscreen);
void handle_events();
void update();
void render();
void clean();
int is_running();
