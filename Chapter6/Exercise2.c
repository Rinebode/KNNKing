//
// Created by raphael on 25/07/25.
//

#include <stdio.h>

int main(void) {

    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    for (;;) {
        if (n == 0) {
            break;
        }

        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d", m);

    return 0;

}
