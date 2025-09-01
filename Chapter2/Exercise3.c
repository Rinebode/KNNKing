//
// Created by raphael on 20/07/25.
//

#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.142

int main(void) {

    float volume, radius;

    //radius assignment
    printf("Please Enter the Radius: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * (radius * radius * radius);

    printf("Volume is: %.2f", volume);

    return 0;
}

