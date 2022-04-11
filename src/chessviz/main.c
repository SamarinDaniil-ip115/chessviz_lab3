#include <libchessviz/board.h>
#include <libchessviz/check_move_figure.h>
#include <libchessviz/move.h>
#include <libchessviz/print_board.h>
#include <libchessviz/read_move.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

#define n 9

int main()
{
    char chess[n][n]
            = {{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
               {'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    int* symbol = (int*)malloc(5 * sizeof(int));
    memset(symbol, 0, sizeof(int) * 5);
    if (!symbol)
        return -1;
    char* step = (char*)malloc(6 * sizeof(char));
    ;
    print_board(chess);
    do {
        scanf("\n%s", step);
        if (step[0] == 'q') {
            printf(" end \n");
            break;
        }
        if (read_move(symbol, step) == 0) {
            if (check_board(symbol, chess) == 0) {
                if (check_move(symbol, chess) == 0) {
                    move(symbol, chess);
                    print_board(chess);
                } else {
                    printf("\n error check-move \n");
                }
            } else {
                printf("\n error check-board \n");
            }
        } else {
            printf("\n error read-move \n");
        }
    } while (1);
    free(step);
    free(symbol);
    return 0;
}