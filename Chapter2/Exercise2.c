//
// Created by raphael on 20/07/25.
//

#include <stdio.h>
#define RADIUS 10
#define FRACTION (4.0f/3.0f)
#define PI 3.142

int main(void) {

    float v = FRACTION * PI * (RADIUS * RADIUS * RADIUS);
    printf("Volume is: %.2f", v);

    return 0;
}

