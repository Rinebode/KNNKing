//
// Created by raphael on 01/09/2025.
//

//
// Created by raphael on 03/08/25.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);


bool equal_array(int counts1[26], int counts2[26]) {

    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) return false;
    }
    return true;
}

void read_word(int counts[26]) {
    char ch;

    //populate list_of_letters by letter occurrence
    printf("Enter the word: ");
    for (int i = 0; i < 30; i++) {
        scanf("%c", &ch);
        ch = tolower(ch);

        if (ch == '\n') {
            break;
        }

        if (ch >= 'a' && ch <= 'z') {
            ++counts[ch - 'a'];
        }
    }
}

int main(void) {

    int counts1[26] = {0}, counts2[26] = {0};
    bool result;

    read_word(counts1);
    read_word(counts2);

    result = equal_array(counts1, counts2);
    if (result == true) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }

    return 0;
}