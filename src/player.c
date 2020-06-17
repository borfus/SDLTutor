#include "player.h"
#include "game.h"

void init_player() {
    strcpy(player.texture_sheet, "assets/character.png");
    player.texture = load_texture(player.texture_sheet);
    player.xpos = 0;
    player.ypos = 0;
    player.x_trajectory = 1;
    player.y_trajectory = 1;
    player.speed = 2;
    player.src_rect.h = 32;
    player.src_rect.w = 32;
    player.src_rect.x = player.xpos;
    player.src_rect.y = player.ypos;
    player.dst_rect.h = player.src_rect.h * 3;
    player.dst_rect.w = player.src_rect.w * 3;
}

void update_player(properties *player) {

    player->xpos += player->speed * player->x_trajectory;
    player->ypos += player->speed * player->y_trajectory;

    if (player->xpos + player->dst_rect.w >= 1920) {
        player->x_trajectory = -1;
    } else if (player->xpos <= 0) {
        player->x_trajectory = 1;
    } 

    if (player->ypos + player->dst_rect.h >= 1080) {
        player->y_trajectory = -1;
    } else if (player->ypos <= 0) {
        player->y_trajectory = 1;
    }
     
    player->dst_rect.x = player->xpos;
    player->dst_rect.y = player->ypos;
}
