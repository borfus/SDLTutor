#ifndef game_h
#define game_h

#include <SDL2/SDL.h>

void init(char *title, int xpos, int ypos, int width, int height, int fullscreen);
void handle_events();
void update();
void render();
void clean();
int is_running();

#endif /* game_h */
