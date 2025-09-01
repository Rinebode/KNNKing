//
// Created by raphael on 02/08/25.
//

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char letter;
    int values[26] = {0}, sum = 0;

    for (char l = 'A'; l <= 'Z'; l++){

        switch (l) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                values[l - 65] = 1;
                break;
            case 'D': case 'G':
                values[l - 65] = 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                values[l - 65] = 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                values[l - 65] = 4;
                break;
            case 'K':
                values[l - 65] = 5;
                break;
            case 'J': case 'X':
                values[l - 65] = 8;
                break;
            case 'Q': case 'Z':
                values[l - 65] = 10;
                break;
        }
    }

    printf("Enter a word: ");
    scanf("%c", &letter);
    while (letter != '\n') {
        letter = toupper(letter);
        sum += values[letter - 65];
        scanf("%c", &letter);
    }

    printf("Scrabble value: %d", sum);
}
