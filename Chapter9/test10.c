//
// Created by raphael on 23/08/2025.
//

#include <stdio.h>

int largest(int n, int a[n]);
int average(int n, int a[n]);
int num_of_positive(int n, int a[n]);

int largest(int n, int a[n]) {

    int i, largest_num;

    largest_num = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > largest_num)
            largest_num = a[i];
    }

    return largest_num;
}

int average(int n, int a[n]) {

    int i, total, count;

    for (i = 0; i < n; i++)
        total += a[i];

    return total / i;
}

int num_of_positive(int n, int a[n]) {

    int i, count = 0;

    for (i = 0; i < n; i++)
        if (a[i] > 0)
            ++count;

    return count;
}

int main(void) {

    printf("%d\n", largest(5, (int []){14, 5, 6, 7, 10, 11}));
    printf("%d\n", average(5, (int []){14, 5, 6, 7, 10, 11}));
    printf("%d\n", num_of_positive(5, (int []){14, 5, 6, 7, 10, 11}));
}