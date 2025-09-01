//
// Created by raphael on 22/08/2025.
//

#include <stdio.h>

int check(int x, int y, int n);

int check(int x, int y, int n) {
    
    if ((x && y > 0) && (x && y <= n - 1))
        return 1;

    return 0;
    
}

int main(void) {

    int num1 = 20, num2 = 29;

    if (check(num1, num2, 30))
        printf("True");
    else {
        printf("False");
    }
}