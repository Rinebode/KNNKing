//
// Created by raphael on 22/07/25.
//

#include <stdio.h>

int main(void) {

    int i, j, k;

    i = 1; j = 1; k = 1;

    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
}



