//
// Created by raphael on 02/09/2025.
//


#include <stdio.h>

int multiplier(int number, int multiplier);
int polynomial(int number);

int multiplier(int number, int x) {

    int i, multiplier = number;

    for (i = 1; i < x; i++)
    number *= multiplier;

    return number;
}

int polynomial(int number) {

    int result;

    result = (3 * multiplier(number, 5)) + (2 * multiplier(number, 4)) - (5 * multiplier(number, 3)) - (multiplier(number, 2))
    + (7 * multiplier(number, 1)) - 6;

    return result;
}

int main(void) {

    int result, n;

    printf("Enter a number to find the polynomial of: ");
    scanf("%d", &n);

    printf("Polynomial = %d", polynomial(n));
}

