//
// Created by raphael on 30/07/25.
//

#include <stdio.h>

int main(void) {

    char checker_board[8][8] = {0};
    int rows, cols;

    rows = (int) sizeof(checker_board) / sizeof(checker_board[0]);
    cols = (int) sizeof(checker_board[0]) / sizeof(checker_board[0][0]);


    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (i + j == 0) {
                checker_board[i][j] = 'B';
            } else {
                checker_board[i][j] = 'R';

        }
    }

    printf("%c", checker_board[0][1]);

}