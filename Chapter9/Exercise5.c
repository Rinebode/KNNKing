//
// Created by raphael on 22/08/2025.
//
#include <stdio.h>
int num_digits(int n);

int num_digits(int n)
{
    int count = 0;

    while (n > 0) {
        n /= 10;
        ++count;
    }

    return count;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d has %d digits", number, num_digits(number));
}