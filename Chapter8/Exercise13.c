//
// Created by raphael on 02/08/25.
//

#include <stdio.h>
#include <ctype.h>

#define SIZE ((int) sizeof(last_name) / sizeof(last_name[0]))

int main(void) {


    char last_name[20], initial, l;


    printf("Enter a first and last name: ");
    initial = getchar();

    //ingest all characters up until surname
    for (int i = 0; getchar() != ' '; i++) {}

    //populate array
    scanf("%c", &l);
    for (int i = 0; l != '\n'; ++i) {
        last_name[i] = l;
        scanf("%c", &l);
    }

    printf("You entered the name: ");
    for (int i = 0; i < SIZE; i++)
        if (toupper(last_name[i]) >= 'A' && toupper(last_name[i]) <= 'Z') {
            printf("%c", last_name[i]);
        }else {
            break;
        }

    printf(", %c.", initial);


}

