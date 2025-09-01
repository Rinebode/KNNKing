//
// Created by raphael on 25/07/25.
//


#include <stdio.h>

int main(void) {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i * i <= n; ++i) {
        if (i % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}


