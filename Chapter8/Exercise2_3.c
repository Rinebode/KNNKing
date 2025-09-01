//
// Created by raphael on 31/07/25.
//

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit, digit_occur[10] = {0}, list_of_digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    long n;


    printf("Enter a number(<=0 to quit): ");
    scanf("%ld", &n);

    while (n > 0) {
        printf("Digit:       ");
        for (int i = 0; i < 10; i++)
            printf(" %-3d", list_of_digits[i]);

        while (n > 0) {
            digit = n % 10;
            digit_occur[digit] += 1;
            n /= 10;
        }

        printf("\nOccurrences: ");
        for (int i = 0; i < 10; i++)
            printf(" %-3d", digit_occur[i]);

        printf("\n");
        printf("\nEnter a number(0 to quit): ");
        scanf("%ld", &n);
    }

    return 0;
}
