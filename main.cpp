#include <iostream>
#include "ui.h"

using namespace std;

int main() {
    init_ui();
    game();
    tear_down_ui();
    cout << endl << "Thanks for playing Slither!" << endl << endl; // normal terminal
    return 0;
}