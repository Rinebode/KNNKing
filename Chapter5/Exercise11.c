//
// Created by raphael on 23/07/25.
//

#include <stdio.h>

int main(void) {

    int tens, unit;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &unit);

    tens *= 10;

    switch (tens) {
        case 90: printf("You entered Ninety-"); break;
        case 80: printf("You entered Eighty-"); break;
        case 70: printf("You entered Seventy-"); break;
        case 60: printf("You entered Sixty-"); break;
        case 50: printf("You entered Fifty-"); break;
        case 40: printf("You entered Forty-"); break;
        case 30: printf("You entered Thirty-"); break;
        case 20: printf("You entered Twenty-"); break;
        case 10:
            if (unit == 0) printf("You entered Ten"); break;
        default: printf("You entered ");
    }

    switch (unit) {
        case 9:
            if (tens >= 20 || tens < 10) printf("Nine.");
            else printf("Nineteen.");
            break;
        case 8:
            if (tens >= 20 || tens < 10) printf("Eight.");
            else printf("Eighteen.");
            break;
        case 7:
            if (tens >= 20 || tens < 10) printf("Seven.");
            else printf("Seventeen.");
            break;
        case 6:
            if (tens >= 20 || tens < 10) printf("Six.");
            else printf("Sixteen.");
            break;
        case 5:
            if (tens >= 20 || tens < 10) printf("five.");
            else printf("Fifteen.");
            break;
        case 4:
            if (tens >= 20 || tens < 10) printf("four.");
            else printf("Fourteen.");
            break;
        case 3:
            if (tens >= 20 || tens < 10) printf("Three.");
            else printf("Thirteen.");
            break;
        case 2:
            if (tens >= 20 || tens < 10) printf("Two.");
            else printf("Twelve.");
            break;
        case 1:
            if (tens >= 20 || tens < 10) printf("One.");
            else printf("Eleven.");
            break;
    }

    return 0;
}