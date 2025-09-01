//
// Created by raphael on 24/08/2025.
//

#include <stdio.h>

#define LEN 100

double inner_product(double a[], double b[], int n);

double inner_product(double a[], double b[], int n) {

    int i, j;
    double total = 0.0;

    for (i = 0; i < n; i++) {
        total += a[i] * b[i];
    }

    return total;
}
