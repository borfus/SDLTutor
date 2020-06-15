#include "texture_manager.h"

SDL_Texture* load_texture(char *texture_filename, SDL_Renderer *renderer) {
    SDL_Surface *surface = IMG_Load(texture_filename);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);

    return texture;
}
