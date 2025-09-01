//
// Created by raphael on 25/07/25.
//


#include <stdio.h>

int main(void) {

    float user_approx, sum, approx, i;

    printf("Enter your approximation constant (e): ");
    scanf("%f", &user_approx);

    sum  = 1;
    approx = 1;
    i = 1;
    while (approx >= user_approx) {
        sum *= i;
        approx = 1/sum;
        ++i;
    }

    printf("Result: %.4f", approx);


    return 0;
}