//
// Created by raphael on 22/08/2025.
//

int gcd(int m, int n);

int gcd(int m, int n) {

    int remainder;

    for (;;) {
        if (n == 0) {
            break;
        }
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

