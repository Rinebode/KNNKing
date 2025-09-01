//
// Created by raphael on 28/07/25.
//

#include <stdio.h>

int main(void) {

    int fact, sum = 1;

    printf("Enter a positive number: ");
    scanf("%d", &fact);

    for (int i = 1; i <= fact; ++i) {
        sum *= i;
    }

    printf("Factorial of %d: %d", fact, sum);

}