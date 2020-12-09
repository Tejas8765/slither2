#include "game.h"

int direction;
int game_state = BEFORE_START;
int score;

void start_game() {
    init_snake();
    init_food();
    score = 0;
    direction = UP;
    game_state = STARTED;
}

void execute_frame() {
    paint_border();
    char key = getch(); // arrows, backspace, del, esc.. are ignored

    if(game_state == BEFORE_START) {
        move(10, 10);
        addstr("Press space to start");
        if(key == 32) {
            start_game();
        }
    } else {
        if(key == UP and direction != DOWN) {
            direction = UP;
        } else if(key == DOWN and direction != UP) {
            direction = DOWN;
        } else if(key == LEFT and direction != RIGHT) {
            direction = LEFT;
        } else if(key == RIGHT and direction != LEFT) {
            direction = RIGHT;
        }
        pair<int, int> head = move_snake(direction);
        if(try_comsume_food(head)) {
            grow_snake();
            score++;
        }
        paint_snake();
        paint_food();
    }
}