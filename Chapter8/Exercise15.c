//
// Created by raphael on 03/08/25.
//


#include <stdio.h>
#define SIZE (int) sizeof(message) / sizeof(message[0])

int main(void) {
    char message[50], ch;
    int char_count = 0, n;

    //populate the message array with characters entered
    printf("Enter message to be encrypted: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%c", &ch);
        if (ch != '\n') {
            message[i] = ch;
            ++char_count;
        } else {
            break;
        }
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (int i = 0; i < char_count; i++) {
        ch = message[i];
        if (ch >= 'A' && ch <= 'Z') {
            message[i] = ((ch - 'A') + n) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            message[i] = ((ch - 'a') + n) % 26 + 'a';
        }

        printf("%c", message[i]);
    }

}