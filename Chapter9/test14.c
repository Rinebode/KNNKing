//
// Created by raphael on 24/08/2025.
//

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

bool has_zero(int a[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            return true;
    }

    return false;

}