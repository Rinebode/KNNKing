//
// Created by raphael on 22/08/2025.
//

#include <stdio.h>

double triangle_area(double base, double height);

double triangle_area(double base, double height)
{
    const double product = base * height;
    return product / 2;
}

int main(void) {

    printf("The area of the triangle is %g\n", triangle_area(20, 10));

    return 0;
}