//
// Created by raphael on 02/09/2025.
//
#include <stdio.h>

int power(int x, int n);

int power(int x, int n) {
    if (n == 0)
        return 1;

    return n % 2 == 0 ? power(x * x, n/2) : x * power(x, n - 1);

}

int main(void) {
    printf("%d", power(5, 4));
}