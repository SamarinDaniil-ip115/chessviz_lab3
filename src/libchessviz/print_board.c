#include "print_board.h"

#include <stdio.h>

void print_board(char chess[9][9])
{
    // printing the chessboard
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%c ", chess[i][j]);
        }
        printf("\n");
    }
}