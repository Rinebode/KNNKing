//
// Created by raphael on 27/07/25.
//

#include <stdio.h>

int main(void) {

    char ch;

    printf("Welcome\n");

    ch = getchar();
    printf("%c", ch);
    while (ch != '\n') {
        printf("Press Enter to continue ... ");
    }
    printf("jjj");
}