//
// Created by raphael on 21/07/25.
//

#include <stdio.h>

int main(void) {

    int user_num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &user_num);

    printf("In octal, your number is: %d%d%d%d%d", (user_num / 8 / 8 / 8 / 8) % 8, (user_num / 8 / 8 / 8) % 8,
        (user_num / 8 / 8) % 8, (user_num / 8) % 8, user_num % 8);
}