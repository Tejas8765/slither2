#include <iostream>
#include "ui.h"
#include "game.h"

using namespace std;

void event_loop() {
    while(true) {
        erase();
        paint_border();
        game_logic();
        getch();
        // we will detectc any key events
        // process the events
        refresh();
    }
}

int main() {
    init_ui();
    event_loop();
    tear_down_ui();
    cout << endl << "Thanks for playing Slither!" << endl << endl; // normal terminal
    return 0;
}