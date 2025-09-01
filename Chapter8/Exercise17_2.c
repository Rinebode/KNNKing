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


    x_pos = n / 2 + 1;
    y_pos = n - 1;
    current = 0;
    for (int i = 2; i <= SIZE; i++) {
        current = magic_numbers[y_pos][x_pos];

        if (x_pos == n) {
            x_pos = 0;
        }

        if (y_pos < 0 && x_pos == 0) {
            y_pos = 0;
        } else if (y_pos < 0 && x_pos > 0) {
            y_pos = n - 1;
        }

        if (magic_numbers[y_pos][x_pos] == 0) {
            magic_numbers[y_pos][x_pos] = i;
        } else {
            magic_numbers[y_pos + 1][x_pos] = i;
            ++y_pos;
        }

        //leave numbers as they are if the number above the current number is not 0 OR y_pos is 0 and x_pos is at the edge
        if (y_pos > 0 && x_pos < n - 1 && magic_numbers[y_pos - 1][x_pos + 1] != 0 || y_pos == 0 && x_pos == n - 1) {
            x_pos += 0;
            y_pos += 0;
        } else {
            ++x_pos;
            --y_pos;
        }
    }

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++) {
            if (j % n == 0) {
                printf("\n");
            }
            printf("%4d", magic_numbers[i][j]);
        }
    
    return 0;

}