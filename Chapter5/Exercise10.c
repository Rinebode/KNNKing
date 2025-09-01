//
// Created by raphael on 23/07/25.
//

#include <stdio.h>

int main(void) {

    int grade, tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    tens = (grade / 10) * 10;

    switch (tens) {
        case 90:
            printf("A"); break;
        case 80:
            printf("B"); break;
        case 70:
            printf("C"); break;
        case 60:
            printf("D");
        case 50: case 40: case 30: case 20: case 10: case 0:
            printf("F"); break;
        default:
            printf("Error Incorrect Grade!"); break;
    }

    return 0;
}