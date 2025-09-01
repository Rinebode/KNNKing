//
// Created by raphael on 22/08/2025.
//

#include <stdio.h>

int day_of_year(int month, int day, int year);
int is_leap_year(int year);

int is_leap_year(int year) {
    if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
        return 1;

    return 0;
}

int day_of_year(int month, int day, int year) {

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total;

    total = 0;
    for (int i = 1; i <= month - 1; i++)
        total += days[i];

    total += day;
    return (is_leap_year(year) && month > 2) ? total + 1 : total;
}

int main(void) {
    int month, day, year;

    printf("Enter the day of the year(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d/%d/%d is the %d day of the year", month,day,year,day_of_year(month, day, year));
}

