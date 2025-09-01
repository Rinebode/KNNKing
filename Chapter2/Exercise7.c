//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    //$20
    printf("\n$20 bills: %d\n", amount / 20);
    amount = amount - (amount / 20 * 20);

    //$10
    printf("$10 bills: %d\n", amount / 10);
    amount = amount - (amount / 10 * 10);

    //$5
    printf("$5 bills: %d\n", amount / 5);
    amount = amount - (amount / 5 * 5);

    //$1
    amount = amount / 1;
    printf("$1 bills: %d\n", amount / 1);

    return 0;
}