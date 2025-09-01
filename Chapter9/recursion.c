//
// Created by raphael on 18/08/2025.
//

#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    else {
        return n * fact(n - 1);
    }
}

int main(void) {
    int i;

    i = fact(3);
}