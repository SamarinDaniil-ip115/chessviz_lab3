#include "move.h"

void move(int* symbol, char chess[9][9])
{
    int symbol_x = 0, symbol_y = 0, symbol_x_end = 0, symbol_y_end = 0;
    char figure;
    // check initial field
    symbol_x = symbol[0];
    symbol_y = symbol[1];
    symbol_x_end = symbol[3];
    symbol_y_end = symbol[4];
    figure = chess[symbol_y][symbol_x];
    chess[symbol_y][symbol_x] = ' ';
    chess[symbol_y_end][symbol_x_end] = figure;
}