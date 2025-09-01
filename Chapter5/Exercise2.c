//
// Created by raphael on 22/07/25.
//

#include <stdio.h>

int main(void) {

    int hh, mm;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hh, &mm);

    //if (hh > 12) hh -= 12;
    hh > 12 ? hh -= 12 : hh;

    printf("Equivalent 12-hour time: %2d:%d PM", hh, mm);

    return 0;
}
