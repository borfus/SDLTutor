#pragma once

#include "game.h"

SDL_Texture* load_texture(char *texture_filename);
void draw_texture(SDL_Texture *texture, SDL_Rect src_rect, SDL_Rect dst_rect);
