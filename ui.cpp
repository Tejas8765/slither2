#include "ui.h"

// ncurses will save whatever you have on the screen
// it will clear the screen
// it will take control over the screen
// when you exit, it will release control
// and it will restore whatever you had earlier

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