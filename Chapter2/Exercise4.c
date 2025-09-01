//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {
    /* This program adds tax to dollars and cents*/

    float dollars_and_cents;

    printf("Please enter an amount: ");
    scanf("%f", &dollars_and_cents);

    printf("With tax added: $%.2f", dollars_and_cents * 1.05);

    return 0;
}