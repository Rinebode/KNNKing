//
// Created by raphael on 01/09/2025.
//

#include <stdio.h>

#define SIZE ((int) sizeof(magic_numbers) / sizeof(magic_numbers[0][0]))
#define ROWS ((int) sizeof(magic_numbers) / sizeof(magic_numbers[0]))
#define COLS ((int) sizeof(magic_numbers[0]) / sizeof(magic_numbers[0][0]))

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

void print_magic_square(int n, int magic_square[n][n]) {

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (j % n == 0) {
                printf("\n");
            }
            printf("%4d", magic_square[i][j]);
        }
}


void create_magic_square(int n, int magic_square[n][n]) {
    int y_pos, x_pos;

    //initialise numbers to zero
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;
    magic_square[0][n / 2] = 1;


    x_pos = n / 2 + 1;
    y_pos = n - 1;
    for (int i = 2; i <= (n * n); i++) {

        if (x_pos == n) {
            x_pos = 0;
        }

        if (y_pos < 0 && x_pos == 0) {
            y_pos = 0;
        } else if (y_pos < 0 && x_pos > 0) {
            y_pos = n - 1;
        }

        if (magic_square[y_pos][x_pos] == 0) {
            magic_square[y_pos][x_pos] = i;
        } else {
            magic_square[y_pos + 1][x_pos] = i;
            ++y_pos;
        }

        //leave numbers as they are if the number above the current number is not 0 OR y_pos is 0 and x_pos is at the edge
        if (y_pos > 0 && x_pos < n - 1 && magic_square[y_pos - 1][x_pos + 1] != 0 || y_pos == 0 && x_pos == n - 1) {
            x_pos += 0;
            y_pos += 0;
        } else {
            ++x_pos;
            --y_pos;
        }
    }
}

int main(void) {

    int n;

    printf("This program creates a magic square of a specified size.\n"
           "The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic[n][n];

    create_magic_square(n, magic);
    print_magic_square(n, magic);

    return 0;

}