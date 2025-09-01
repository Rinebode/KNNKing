//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    int d1_mm, d1_dd, d1_yy, d2_mm, d2_dd, d2_yy;

    printf("Enter a date: ");
    scanf("%d/%d/%d", &d1_mm, &d1_dd, &d1_yy);

    d2_yy = d2_mm = d2_dd = 99;
    while (d2_mm != 0 && d2_dd != 0 && d2_yy != 0) {

        if (d2_yy < d1_yy || d2_yy <= d1_yy && d2_mm < d1_mm || d2_yy <= d1_yy && d2_mm <= d1_mm && d2_dd < d1_dd) {
            d1_mm = d2_mm;
            d1_dd = d2_dd;
            d1_yy = d2_yy;
        }

        printf("Enter a date: ");
        scanf("%d/%d/%d", &d2_mm, &d2_dd, &d2_yy);


    }

    printf("%d/%d/%d is the earliest date", d1_mm, d1_dd, d1_yy);


    return 0;
}