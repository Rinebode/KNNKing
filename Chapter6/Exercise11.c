//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    float n, sum, approx;

    printf("Number you would like to compute an approximation for: ");
    scanf("%f", &n);

    sum  = 1;
    approx = 1;
    for (float i = 1; i <= n; ++i) {
        sum *= i;
        approx += 1/sum;

    }

    printf("Result: %.4f", approx);


    return 0;
}