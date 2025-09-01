//
// Created by raphael on 28/07/25.
//

#include <ctype.h>
#include <stdio.h>

int main(void) {

    char letter;
    int sum = 0;

    printf("Enter a sentence: ");

    letter = getchar();

    while (letter != '\n') {
        letter = toupper(letter);
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            sum += 1;
        }

        letter = getchar();
    }

    printf("Your sentence contains %d vowels.", sum);

}