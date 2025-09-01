//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    int user_num, num_of_digits = 0, dummy;

    printf("Enter a number: ");
    scanf("%d", &user_num);

    //printf("The Reversal is: %d%d", user_num % 10, user_num / 10);

    dummy = user_num;
    do {
        dummy /= 10;
        num_of_digits += 1;
    } while (dummy > 0);

    printf("%d", 10 * num_of_digits);
    printf("The Reversal is: %d%d", user_num % (10 * num_of_digits), user_num / 10);

}

