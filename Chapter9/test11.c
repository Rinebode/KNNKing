//
// Created by raphael on 23/08/2025.
//

#include <stdio.h>
#include <ctype.h>

float compute_GPA(int n, char grades[]);
#LEN int 5;

int main(void) {
    char grades_array[5] = "";
    char grade, a;
    int n = 0, i;

    printf("Enter Comma seperated grades: ");
    grade = getchar();
    for (i = 0; grade != '\n'; i++) {
        grade = toupper(grade);
        if (grade >= 'A' && grade <= 'Z') {
            grades_array[n] = grade;
            ++n;
        }
        grade = getchar();
    }
    printf("Average grade is: %.2f", compute_GPA(n, grades_array));
    return 0;
}

float compute_GPA(const int n, char grades[]) {
    int i;
    char grade;
    float total = 0;

    for (i = 0; i < n; i++) {
        grade = grades[i];
        switch (grade) {
            case 'A': total += 4; break;
            case 'B': total += 3; break;
            case 'C': total += 2; break;
            case 'D': total += 1; break;
            case 'F': total += 0; break;
            default: break;
        }
    }

    return total / i;
}