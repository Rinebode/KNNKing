//
// Created by raphael on 25/07/25.
//
#include <stdio.h>

int main(void) {

    int user_num, user_denum, remainder, gcd, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &user_num, &user_denum);

    gcd = user_num;
    n = user_denum;

    for (;;) {
        if (n == 0) {
            break;
        }

        remainder = gcd % n;
        gcd = n;
        n = remainder;
    }

    gcd = gcd;
    printf("In lowest terms: %d/%d", user_num/gcd, user_denum/gcd);

    return 0;

}
