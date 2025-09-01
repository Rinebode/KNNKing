//
// Created by raphael on 21/07/25.
//

#include <stdio.h>

int main(void) {

    int user_num;

    printf("Enter a two digit number: ");
    scanf("%d", &user_num);

    printf("The Reversal is: %d%d", user_num % 10, user_num / 10);
}
