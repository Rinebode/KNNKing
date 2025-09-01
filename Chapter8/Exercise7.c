//
// Created by raphael on 01/08/25.
//

#include <stdio.h>
#define ROWS (int) sizeof(number_table) / sizeof(number_table[0])
#define COLS (int) sizeof(number_table[0]) / sizeof(number_table[0][0])


int main(void) {
    int number_table[5][5] = {0}, total;

    //Populate Arrays
    for (int i = 0; i < ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &number_table[i][j]);
    }

    //Row Totals
    printf("\nRow totals: ");
    for (int i = 0; i < ROWS; i++) {
        total = 0;
        for (int j = 0; j < COLS; j++) {
            total += number_table[i][j];
            if (j == 4)
                printf("%-4d", total);
        }

    }

    //Column Totals
    printf("\nColumn totals: ");
    for (int i = 0; i < COLS; i++) {
        total = 0;
        for (int j = 0; j < ROWS; j++) {
            total += number_table[j][i];
            if (j == 4)
                printf("%-4d", total);
        }

    }

    return 0;

}
