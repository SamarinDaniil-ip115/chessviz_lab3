#include <ctest.h>
#include <libchessviz/board.h>
#include <stdlib.h>

char chess[9][9] = {{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
                    {'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

int symbol[5] = {5, 2, 0, 5, 4};
int symbol1[5] = {5, 5, 0, 5, 4};
int symbol2[5] = {5, 2, 0, 3, 2};

CTEST(suite, test0) { ASSERT_EQUAL(0, check_board(symbol, chess)); }

CTEST(suite, test1) { ASSERT_EQUAL(1, check_board(symbol1, chess)); }

CTEST(suite, test2) { ASSERT_EQUAL(1, check_board(symbol2, chess)); }