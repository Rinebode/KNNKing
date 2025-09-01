//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    int state_code, first_half, second_half;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d)%d-%d", &state_code, &first_half, &second_half);

    printf("%d.%d.%d", state_code, first_half, second_half);
}
