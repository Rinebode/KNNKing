//
// Created by raphael on 31/07/25.
//

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("%d ", digit);
        }
        digit_seen[digit] = true;
        n /= 10;
    }


    return 0;
}