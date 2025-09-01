//
// Created by raphael on 01/09/2025.
//

#include <stdio.h>
#define LEN 100
int populate_array(int user_array[]);
int selection_sort(int n, int array_of_nums[n]);
void print_array_elements(int n, int array_of_nums[n]);


int main(void) {

    int user_nums[LEN] = {0}, n;

    n = populate_array(user_nums);
    selection_sort(n, user_nums);
    print_array_elements(n, user_nums);


}

int populate_array(int user_array[]) {

    int n, count = 0;
    char ch;

    printf("Enter a series of integers you would like to sort: ");

    for (;;) {
        if (scanf("%d", &n) == 1) {
            user_array[count] = n;
            ++ count;
        }
        if ((ch = getchar()) == '\n') break;
    }
    return count;
}

int selection_sort(int n, int array_of_nums[n]) {

    int i, highest, current_number;

    for (i = 0; i < n; i++) {
        highest = array_of_nums[n-1];
        current_number = array_of_nums[i];
        if (current_number > highest) {
            array_of_nums[i] = highest;
            array_of_nums[n - 1] = current_number;
        }
    }

    if (n - 1 == 0) {
        return 0;
    }

    selection_sort(n - 1, array_of_nums);
}

void print_array_elements(int n, int array_of_nums[n]) {

    int i;

    for (i = 0; i < n; i++)
        printf("%d ", array_of_nums[i]);
}


