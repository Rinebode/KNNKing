//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    int n_days, week_start;

    printf("Enter a number of days in month: ");
    scanf("%d", &n_days);

    printf("Enter starting day of the week (1=sun, 7=sat) : ");
    scanf("%d", &week_start);

    for (int i = 1; i < week_start; ++i)
        printf("\t");

    for (int i = 1, end = 7; i <= n_days; ++i) {

        printf("%d\t", i);

        if (end % (week_start - 1 + i) == 0 ) {
            printf("\n");
            end += 7;
        }

    }

    return 0;
}

