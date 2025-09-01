//
// Created by raphael on 04/08/25.
//

#include <stdio.h>

#define SIZE ((int) sizeof(magic_numbers) / sizeof(magic_numbers[0][0]))
#define ROWS ((int) sizeof(magic_numbers) / sizeof(magic_numbers[0]))
#define COLS ((int) sizeof(magic_numbers[0]) / sizeof(magic_numbers[0][0]))

int main(void) {

    int n;

    printf("This program creates a magic square of a specified size.\n"
           "The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_numbers[n][n], y_pos, x_pos, current;

    //initialise numbers to zero
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            magic_numbers[i][j] = 0;
    magic_numbers[0][n / 2] = 1;


    x_pos = 3;
    y_pos = 4;
    current = 0;
    for (int i = 2; i <= SIZE; i++) {
        current = magic_numbers[y_pos][x_pos];
        printf("%d", current);
        if (magic_numbers[y_pos][x_pos] == 0 ) {
            magic_numbers[y_pos][x_pos] = i;

            if (magic_numbers[y_pos - 1][x_pos + 1] == 0 && y_pos - 1 != -1 || (y_pos - 1 < 0 && x_pos > 0)) {
                --y_pos;
                ++x_pos;
            } else {
                ++y_pos;
            }

        } else {
            magic_numbers[y_pos + 1][x_pos - 1] = i;
            y_pos += 1;
            //x_pos += 1;
        }

        if (x_pos == 5) {
            x_pos = 0;
        }

        if (y_pos == -1) {
            y_pos = n - 1;
        }




    }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            printf("%4d", magic_numbers[i][j]);



    return 0;


}
