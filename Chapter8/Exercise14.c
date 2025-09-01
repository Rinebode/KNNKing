//
// Created by raphael on 02/08/25.
//

#include <stdio.h>
#define SIZE ((int) sizeof(characters) / sizeof(characters[0]))

int main(void) {

    char characters[50] = {0}, ch, punc;
    int char_count = 0;

    //initialise array
    printf("Enter a sentence: ");
    for (int i = 0; i < SIZE; i++) {
        ch = getchar();
        if (ch != '.' && ch != '!' && ch != '?') {
            characters[i] = ch;
            ++char_count;
        } else {
            punc = ch;
            break;
        }
    }


    //print reversal
    printf("Reversal of sentence:");
    for (int i = char_count; i >= 0; i--) {
        if (characters[i - 1] == ' ' || i == 0) {
            printf(" ");
            for (int j = i; j < char_count; j++) {
                if (characters[j] == ' ') {
                    break;
                }
                printf("%c", characters[j]);
            }
        }
    }

    printf("%c", punc);


  }