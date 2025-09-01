//
// Created by raphael on 24/08/2025.
//

#include <stdio.h>

double median(double x, double y, double z)
{
    double median = y;


    if (y > x) {
        if (z > x) median = z;
        else median = x;

    } else if (z > x) {
        median = x;
    } else if (z > y) median = z;

    return median;
}

int main(void) {
    printf("%f", median(14.10, 13.17, 12.30));
}