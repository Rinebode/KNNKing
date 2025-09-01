//
// Created by raphael on 31/07/25.
//

#include <ctype.h>
#include <stdio.h>

#define SIZE ((int) sizeof(ch_list) / sizeof(ch_list[0]))

int main(void) {

    int n = 0;
    char ch_list[26], ch;

    printf("Enter message: ");
    for (int j = 0; j < SIZE; j++) {
        scanf("%c", &ch_list[j]);
    }


    for (int i = 0; i < SIZE; i++) {
        if (toupper(ch_list[i]) == 'A')
            ch_list[i] = '4';
        else if (toupper(ch_list[i]) == 'B')
            ch_list[i] = '8';
        else if (toupper(ch_list[i]) == 'E')
            ch_list[i] = '3';
        else if (toupper(ch_list[i]) == 'I')
            ch_list[i] = '1';
        else if (toupper(ch_list[i]) == 'O')
            ch_list[i] = '0';
        else if (toupper(ch_list[i]) == 'S')
            ch_list[i] = '5';
    }

    for (int i = 0; i < SIZE; i++)
        printf("%c",ch_list[i]);
}