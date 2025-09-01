//
// Created by raphael on 23/07/25.
//

#include <stdio.h>

int main(void) {

    int d1_mm, d1_dd, d1_yy, d2_mm, d2_dd, d2_yy;

    printf("Enter first date: ");
    scanf("%d/%d/%d", &d1_mm, &d1_dd, &d1_yy);

    printf("Enter second date: ");
    scanf("%d/%d/%d", &d2_mm, &d2_dd, &d2_yy);

    if (d1_yy > d2_yy) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d2_mm, d2_dd, d2_yy, d1_mm, d1_dd, d1_yy);
    }
    else if (d2_yy > d1_yy) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d1_mm, d1_dd, d1_yy, d2_mm, d2_dd, d2_yy);
    }
    else if (d1_mm > d2_mm) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d2_mm, d2_dd, d2_yy, d1_mm, d1_dd, d1_yy);
    }
    else if (d2_mm > d1_mm) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d1_mm, d1_dd, d1_yy, d2_mm, d2_dd, d2_yy);
    }
    else if (d1_dd > d2_dd) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d2_mm, d2_dd, d2_yy, d1_mm, d1_dd, d1_yy);
    }
    else if (d2_dd > d1_dd) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d1_mm, d1_dd, d1_yy, d2_mm, d2_dd, d2_yy);
    }
    else {
        printf("Dates are equal!");
    }


    return 0;
}
