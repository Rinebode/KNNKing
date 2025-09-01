//
// Created by raphael on 23/07/25.
//
#include <stdio.h>

int main(void) {

    float taxable_income, tax;


    printf("Enter Taxable income: ");
    scanf("%f", &taxable_income);

    if (taxable_income < 750.00f) {
        tax = taxable_income * 0.01;
    }
    else if (taxable_income < 2250.00f) {
        tax = 7.50f + (taxable_income - 750.00f) * .02f;
    }
    else if (taxable_income < 3750.00f) {
        tax = 37.50f + (taxable_income - 2250.00f) * .03f;
    }
    else if (taxable_income < 5250.00f) {
        tax = 82.50f + (taxable_income - 3750.00f) * .04f;
    }
    else if (taxable_income < 7000.00f) {
        tax = 142.50f + (taxable_income - 5250.00f) * .05f;
    }
    else {
        tax = 230.00f + (taxable_income - 7000.00f) * .06f;
    }

    printf("Tax Owed: %.2f", tax);
}
