//
// Created by raphael on 01/08/25.
//

#include <stdio.h>
#define ROWS ((int) sizeof(number_table) / sizeof(number_table[0]))
#define COLS ((int) sizeof(number_table[0]) / sizeof(number_table[0][0]))


int main(void) {
    int number_table[5][5] = {0}, low, high;
    float total;

    //Populate Arrays
    for (int i = 0; i < ROWS; i++) {
        printf("Student %d quiz scores: ", i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &number_table[i][j]);
    }

    //Row Totals
    for (int i = 0; i < ROWS; i++) {
        printf("\nStudent %d\n", i + 1);
        total = 0;
        for (int j = 0; j < COLS; j++) {
            total += number_table[i][j];
            if (j == COLS - 1 ) {
                printf("Total Score: \t%.2f\n", total);
                printf("Average Score: \t%.2f\n", total / COLS);
            }
        }
    }

    printf("----------------------------Quizzes----------------------------\n");

    //Column Totals

    for (int i = 0; i < COLS; i++) {
        printf("\nQuiz %d\n", i + 1);
        total = 0;
        low = number_table[0][i];
        high = number_table[0][i];
        for (int j = 0; j < ROWS; j++) {
            total += number_table[j][i];
            if (number_table[j][i] < low)
                low = number_table[j][i];
            else if (number_table[j][i] > high)
                high = number_table[j][i];

            if (j == 4) {
                printf("Average: %.2f\n", total / (int) ROWS);
                printf("High Score: %d\n", high);
                printf("Low Score: %d\n", low);
            }

        }

    }

    return 0;

}