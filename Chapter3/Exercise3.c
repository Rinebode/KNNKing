//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    int gs1, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GS1: %d\nGroup identifer: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",
        gs1, group_identifier, publisher_code, item_number, check_digit);

    return 0;
}
