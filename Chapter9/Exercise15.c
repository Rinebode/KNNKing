//
// Created by raphael on 24/08/2025.
//

#include <stdio.h>

double median(double x, double y, double z)
{
    double numbers[] = {x, y, z};
    int highest_element = 2, i, high, current;

    current = 0;
    high = numbers[2];
    for (i = 0; i < 3; i++) {
        current = numbers[i];
        if (current > high) {
            numbers[i] = numbers[2];
            numbers[2] = current;
        }


    }



}