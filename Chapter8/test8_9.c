//
// Created by raphael on 30/07/25.
//

#include <stdio.h>



int main(void) {

    int temp_readings[30][24] = {0}, sum, total = 0, rows, cols;

    rows = (int) sizeof(temp_readings) / sizeof(temp_readings[0]);
    cols = (int) sizeof(temp_readings[0]) / sizeof(temp_readings[0][0]);
    total = rows * cols;

    for (int i = 0; i < cols; i++) {
        for (int j = 0; i < rows; i++) {
            sum += temp_readings[i][j];
        }
    }


    printf("Average: %d", sum / total);

}
