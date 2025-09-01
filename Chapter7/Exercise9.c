//
// Created by raphael on 28/07/25.
//

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hh, mm, user_minutes_since;
    char am_or_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hh, &mm, &am_or_pm);

    am_or_pm = toupper(am_or_pm);
    if (hh == 12 && (am_or_pm == 'PM' || am_or_pm == 'P')) {
        ;
    }
    else if (am_or_pm == 'P' || am_or_pm == 'PM') {
        hh += 12;
    }



    printf("Equivalent 24-hour time: %0.2d:%0.2d", hh, mm);
}
