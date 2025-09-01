//
// Created by raphael on 28/07/25.
//

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("Enter two fractions separated by a comma: ");
    scanf("%d/%d,%d/%d", &num1, &denom1, &num2, &denom2);
    getchar();

    printf("Mathematical operation (+,-,*,/): ");
    sign = getchar();

    if (sign == '/') {
        result_num = num1 * denom2 / num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '*') {
        result_num = num1 * num2 / denom1 * denom2;
        result_denom = denom1 * denom2;
    }
    else if (sign == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
