#include "ui.h"

void init_ui() {
    initscr(); // initialize the ncurses mode
}

void tear_down_ui() {
    endwin(); // exit the ncurses mode
}

void game() {

    move(10, 10);
    addstr("Hello, I'm in ncurses"); // add a string to the window
    getch();
}