#include <libchessviz/read_move.h>
#include <libchessviz/check_move_figure.h>
#include <libchessviz/move.h>
#include <libchessviz/board.h>
#include <libchessviz/print_board.h>
#include <string.h>

#include <stdlib.h>
#include <stdio.h>

#define n 9

int main()
{
    char chess[n][n] = {{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
                        {'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    int *symbol = (int*)malloc(5*sizeof(int));
    memset(symbol, 0, sizeof(int)*5);
    if(!symbol)
        return -1;
    char *step = (char*)malloc(6*sizeof(char));;
    print_board(chess);
    scanf("\n%s", step);
    if (step[0] == 'q')
    {
        printf("\n end");
    }  
    if (read_move(symbol, step))
    {
        for(int i = 0; i < 6; i++)
        {
            printf("%d", symbol[i]);
        }
        printf("\n");
        if (check_board(symbol, chess))
        {
            if (check_move(symbol, chess))
            {
                move(symbol, chess);
                print_board(chess);
            } else {
                printf("error check-move");
            }
        } else {
            printf("error check-board");
        }
    } else {
        printf("error read-move");
    }
    free(step);
    free(symbol);
    return 0;
}