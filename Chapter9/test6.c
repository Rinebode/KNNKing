//
// Created by raphael on 22/08/2025.
//
#include <stdio.h>
int digit(int n, int k);

int digit(int n, int k) {
    if (k > n) return 0;

    if (k == 1)
        return n % 10;

    for (int i = 1; i < k; i++)
        n /= 10;
    return n % 10;
}

int main(void) {
    printf("%d", digit(8249, 3));
}