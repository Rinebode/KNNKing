//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    int month, day, year;

    printf("Please enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%d", year, month, day);

    return 0;
}
