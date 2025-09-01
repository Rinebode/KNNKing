//
// Created by raphael on 24/08/2025.
//

int fact(int n)
{
    int total = 1, i;

    for (i = 2; i <= n; i++) {
        total *= i;
    }

    return total;
}