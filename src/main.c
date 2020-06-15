#include <stdio.h>
#include "game.h"

int main(int argc, char *argv[]) {

    init("SDLTutor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, 1);

    while (is_running()) {
        handle_events();
        update();
        render();
    }

    clean();

    return 0;
}

