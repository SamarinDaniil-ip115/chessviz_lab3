#include "check_move_figure.h"

#include <stdlib.h>

int check_move(int* symbol, char chess[9][9])
{
    int symbol_x = 0, symbol_y = 0, symbol_x_end = 0, symbol_y_end = 0;
    char figure;
    int check = 1;
    // check initial field
    symbol_x = symbol[0];
    symbol_y = symbol[1];
    symbol_x_end = symbol[3];
    symbol_y_end = symbol[4];
    figure = chess[symbol_x][symbol_y];
    // check pawn
    if (figure == 'p' || figure == 'P') {
        if (symbol_x == symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) <= 2
                && abs(symbol_y - symbol_y_end) != 0) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    // check rook
    if (figure == 'r' || figure == 'R') {
        if (symbol_x == symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) != 0) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (symbol_x != symbol_x_end && abs(symbol_x - symbol_x_end) != 0) {
            if (symbol_y == symbol_y_end) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    // check knight
    if (figure == 'n' || figure == 'N') {
        if (abs(symbol_x - symbol_x_end) == 2) {
            if (abs(symbol_y - symbol_y_end) == 1) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (abs(symbol_x - symbol_x_end) == 1) {
            if (abs(symbol_y - symbol_y_end) == 2) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    // check bishop
    if (figure == 'b' || figure == 'B') {
        if (symbol_y != symbol_y_end && symbol_x != symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) == abs(symbol_x - symbol_x_end)
                && abs(symbol_x - symbol_x_end) != 0) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    // check queen
    if (figure == 'q' || figure == 'Q') {
        if (symbol_y != symbol_y_end && symbol_x != symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) == abs(symbol_x - symbol_x_end)
                && abs(symbol_x - symbol_x_end) != 0) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (symbol_x == symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) != 0) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (symbol_x != symbol_x_end && abs(symbol_x - symbol_x_end) != 0) {
            if (symbol_y == symbol_y_end) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    // check king
    if (figure == 'k' || figure == 'K') {
        if (symbol_y != symbol_y_end && symbol_x != symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) == abs(symbol_x - symbol_x_end)
                && abs(symbol_x - symbol_x_end) == 1) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (symbol_x == symbol_x_end) {
            if (abs(symbol_y - symbol_y_end) == 1) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
        if (symbol_x != symbol_x_end && abs(symbol_x - symbol_x_end) == 1) {
            if (symbol_y == symbol_y_end) {
                check = 0;
            } else {
                check = 1;
            }
        } else {
            check = 1;
        }
    }
    //
    return check;
}