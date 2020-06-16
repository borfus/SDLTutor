#pragma once

#include "game.h"

typedef struct properties {
    char texture_sheet[32];
    int xpos;
    int ypos;
    int x_trajectory;
    int y_trajectory;
    int speed;
    SDL_Texture *texture;
    SDL_Rect src_rect;
    SDL_Rect dst_rect;
} properties;

