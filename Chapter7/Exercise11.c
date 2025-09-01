//
// Created by raphael on 28/07/25.
//

#include <stdio.h>

int main(void) {

    char f_initial, ch;

    printf("Enter a first and last name: ");
    scanf("%1c", &f_initial);

    while (getchar() != ' ');

    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }

    printf(", %c.", f_initial);
}