//
// Created by raphael on 25/07/25.
//

//
// Created by raphael on 25/07/25.
//


#include <stdio.h>

int main(void) {

    int sum, i;

    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += 1;
    }

    printf("%d\n", sum);
}
