#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

void print_array(char walk[10][10]) {
    //print grid with all letters
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) {
            printf("%2c", walk[i][j]);
            if (j == 9) {
                printf("\n");
            }
        }
}

void generate_random_walk(char walk[10][10]) {

    char letter;
    int x_pos, y_pos, choice;
    bool directions_tried[4] = {0}, advanced = false;

    //populate path array
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            walk[i][j] = '.';

    walk[0][0] = 'A';
    letter = 'B';
    x_pos = 0;
    y_pos = 0;
    while (letter <= 'Z') {
        advanced = false;
        choice = rand() % 4;

        switch (choice) {
            case 0:
                if (walk[y_pos][x_pos + 1] == '.' && x_pos + 1 < 10) {
                    walk[y_pos][x_pos + 1] = letter;
                    x_pos += 1;
                    advanced = true;
                } else {
                    directions_tried[0] = true;
                }
                break;

            case 1:
                if (walk[y_pos][x_pos - 1] == '.' && x_pos - 1 >= 0) {
                    walk[y_pos][x_pos - 1] = letter;
                    x_pos -= 1;
                    advanced = true;
                } else {
                    directions_tried[1] = true;
                }
                break;

            case 2:
                if (walk[y_pos - 1][x_pos] == '.' && y_pos + 1 <= 0) {
                    walk[y_pos - 1][x_pos] = letter;
                    y_pos -= 1;
                    advanced = true;
                } else {
                    directions_tried[2] = true;
                }
                break;

            case 3:
                if (walk[y_pos + 1][x_pos] == '.' && y_pos + 1 < 10) {  // Note: fixed index typo from your original
                    walk[y_pos + 1][x_pos] = letter;
                    y_pos += 1;
                    advanced = true;
                } else {
                    directions_tried[3] = true;
                }
                break;

            default:
                // Optional: handle invalid option
                break;
        }

            //check if all directions tried and there is no where to go
            if (directions_tried[0] && directions_tried[1] && directions_tried[2] && directions_tried[3])
                break;

        //if found element to place the letter - do these things
        if (advanced) {
            letter += 1;
            for (int i = 0; i < 4; i++)
                directions_tried[i] = false;

        }
    }
}

int main(void) {

    //option 0 = right
    //option 1 = left
    //option 2 = up
    //option 3 = down

    srand((unsigned int) time(NULL));

    char grid[10][10], letter;

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}