#include <stdio.h>
#include "game.h"

int count = 0;
int running = 0;
SDL_Window *window;
SDL_Renderer *renderer;

void init(char *title, int xpos, int ypos, int width, int height, int fullscreen) {
    int flags = 0;
    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    } 

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Subsystems initialized.\n");

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window) {
            printf("Window created.\n");
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
            printf("Renderer created.\n");
        }

        running = 1;
    }
}

void handle_events() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT:
            running = 0;
            break;
        default:
            break;
    }
}

void update() {
    count++;
    printf("%d\n", count);
}

void render() {
    SDL_RenderClear(renderer);
    //render stuff
    SDL_RenderPresent(renderer);
}

void clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    printf("Game cleaned.\n");
}

int is_running() {
    return running;
}
