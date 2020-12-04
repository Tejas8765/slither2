#include "game.h"

int i = 10;

void game_logic() {
    move(10, i);
    addstr("#");
    i = i + 1;
    if(i > 20) i = 0;
}