//
// Created by raphael on 23/07/25.
//

#include <stdio.h>

int main(void) {

    int wind_speed;


    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1) {
        printf("Calm");
    }
    else if (wind_speed < 4) {
        printf("Light air");
    }
    else if (wind_speed < 28) {
        printf("Breeze");
    }
    else if (wind_speed < 48) {
        printf("Gale");
        }
    else if (wind_speed < 64) {
        printf("Storm");
    }
    else {
        printf("Hurricane");
    }
}
