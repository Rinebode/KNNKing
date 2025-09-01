//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    float user_num, largest;

    printf("Enter a number (0 to stop): ");
    scanf("%f", &user_num);

    largest = user_num;
    while (user_num != 0) {

        if (user_num > largest)
            largest = user_num;

        printf("Enter a number (0 to stop): ");
        scanf("%f", &user_num);
    }

    printf("Largest number entered was %.2f", largest);

}
