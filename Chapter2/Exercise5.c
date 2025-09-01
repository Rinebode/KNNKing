//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    float x, result;

    printf("Please enter a value for x: ");
    scanf("%f", &x);

    result = ((3 * x) * 5) + ((2 * x) * 4) - x * x + 7 * x - 6;
    printf("%.2f", result);

    return 0;
}