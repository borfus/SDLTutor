#include "texture_manager.h"

SDL_Texture* load_texture(char *texture_filename) {
    SDL_Surface *surface = IMG_Load(texture_filename);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);

    return texture;
}

void draw_texture(SDL_Texture *texture, SDL_Rect src_rect, SDL_Rect dst_rect) {
    SDL_RenderCopy(renderer, texture, &src_rect, &dst_rect);
}
