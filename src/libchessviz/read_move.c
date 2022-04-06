#include "read_move.h"

#include <string.h>

#define k 8

int read_move(int *symbol, char *step) {
  char position_x[k] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  char position_y[k] = {'1', '2', '3', '4', '5', '6', '7', '8'};
  int check = 1;
  int number_symbol = 0;
  //
  // check symbol 0
  number_symbol = 0;
  for (int position = 0; position < 8; position++) {
    if (step[number_symbol] == position_x[position]) {
      symbol[number_symbol] = position + 1;
      check = 0;
      break;
    } else {
      check = 1;
    }
  }
  // check symbol 3
  number_symbol = 3;
  for (int position = 0; position < 8; position++) {
    if (step[number_symbol] == position_x[position]) {
      symbol[number_symbol] = position + 1;
      check = 0;
      break;
    } else {
      check = 1;
    }
  }
  // check symbol 1
  number_symbol = 1;
  for (int position = 0; position < 8; position++) {
    if (step[number_symbol] == position_y[position]) {
      symbol[number_symbol] = position + 1;
      check = 0;
      break;
    } else {
      check = 1;
    }
  }
  // check symbol 4
  number_symbol = 4;
  for (int position = 0; position < 8; position++) {
    if (step[number_symbol] == position_y[position]) {
      symbol[number_symbol] = position + 1;
      check = 0;
      break;
    } else {
      check = 1;
    }
  }
  return check;
}