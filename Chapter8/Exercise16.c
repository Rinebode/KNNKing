//
// Created by raphael on 03/08/25.
//

#include <stdio.h>
#include <ctype.h>

#define SIZE (int) sizeof(word_two) / sizeof(word_two[0])
#define LETTER_ARRAY_LENGTH ((int) sizeof(list_of_letters) / sizeof(list_of_letters))

int main(void) {

    char word_two[20], ch;
    int char_count = 0, list_of_letters[26] = {0}, sum = 0;

    //populate list_of_letters by letter occurence
    printf("Enter first word: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%c", &ch);
        ch = tolower(ch);

        if (ch == '\n') {
            break;
        }

        if (ch >= 'a' && ch <= 'z') {
            ++list_of_letters[ch - 'a'];
        }

        ++char_count;
    }

    //subtract the number of letter occurrences in the second.
    printf("Enter second word: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%c", &ch);
        ch = tolower(ch);

        if (ch == '\n') {
            break;
        }

        if (ch >= 'a' && ch <= 'z') {
            printf("%c%d", ch, ch - 'a');
            --list_of_letters[ch - 'a'];
        }

    }

    for (int i = 0; i < 26; i++) {
        sum += list_of_letters[i];
    }

    if (sum == 0) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }



}