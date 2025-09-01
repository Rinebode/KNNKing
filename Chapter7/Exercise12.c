//
// Created by raphael on 28/07/25.
//

#include <stdio.h>

int main(void) {

    float n1, sum = 0;
    char next_value;

    printf("Enter an expression: ");
    scanf("%f", &n1);

    next_value = getchar();
    sum += n1;

    while (next_value != '\n') {
        if (next_value == '+') {
            next_value = getchar();
            sum += (int) next_value - (int) '0';
        }
        else if (next_value == '-') {
            next_value = getchar();
            sum -= (int) next_value - (int) '0';
        }
        else if (next_value == '*') {
            next_value = getchar();
            sum *= (int) next_value - (int) '0';
        }
        else {
            next_value = getchar();
            sum /= (int) next_value / (int) '0';
        }

        next_value = getchar();
    }



    printf("%.2f", sum);
}