#include "board.h"

int check_board(int *symbol, char chess[9][9]) {
  int symbol_x = 0, symbol_y = 0;
  // check final field
  symbol_x = symbol[3];
  symbol_y = symbol[4];
  if (chess[symbol_y][symbol_x] == ' ') {
    // check initial field
    symbol_x = symbol[0];
    symbol_y = symbol[1];
    if (chess[symbol_y][symbol_x] != ' ') {
      return 0;
    } else {
      return 1;
    }
  } else {
    return 1;
  }
}
