#include <stdio.h>
#include "game.h"

#define FPS 144

int main(int argc, char *argv[]) {

    unsigned int frame_start;
    int frame_delay = 1000/FPS;
    int frame_time;
    
    init("SDLTutor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, 1);

    while (is_running()) {
        frame_start = SDL_GetTicks();

        handle_events();
        update();
        render();

        frame_time = SDL_GetTicks() - frame_start;

        if (frame_delay > frame_time) {
            SDL_Delay(frame_delay - frame_time);
        }
    }

    clean();

    return 0;
}

