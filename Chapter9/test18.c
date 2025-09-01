//
// Created by raphael on 01/09/2025.
//

#include <stdio.h>

int gcd(int m, int n);

int gcd(int m, int n) {
    int remainder;


    if (n == 0) {
        return m;
    }

    gcd(n, m % n);
}

int main(void) {
printf("%d", gcd(18, 12));
}