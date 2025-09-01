//
// Created by raphael on 30/07/25.
//

#include <stdio.h>

#define SIZE (int) sizeof(fib) / sizeof(fib[0])

int main(void) {

    int fib[40] = {[1] = 1}, n1, n2, i;

    printf("%d, %d", fib[0], fib[1]);
    for (i = 2, n1 = 0, n2 = 1; i < SIZE; i++) {
        fib[i] = fib[n1] + fib[n2];
        ++n1;
        ++n2;
        printf(", %d", fib[i]);
    }



    return 0;

}