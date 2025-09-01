//
// Created by raphael on 23/07/25.
//

#include <stdio.h>

int main(void)
{
    int hh, mm, user_minutes_since;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hh, &mm);

    user_minutes_since = hh * 60 + mm;


    if (user_minutes_since < 8 * 60 + 0) {
        printf("Closest departure time: 8:00 a.m., arriving at 10:16 a.m.");
    }

    else if (user_minutes_since < 9 * 60 + 43 && user_minutes_since >= (9 * 60 + 43) - ((9 * 60 + 43) - (8 * 60 + 0)) / 2) {
        printf("Closest departure time: 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (user_minutes_since < 9 * 60 + 43 && user_minutes_since <= (9 * 60 + 43) - ((9 * 60 + 43) - (8 * 60 + 0)) / 2) {
        printf("Closest departure time: 8:00 a.m., arriving at 10:16 a.m.");
    }

    else if (user_minutes_since < 11 * 60 + 19 && user_minutes_since >= (11 * 60 + 19) - ((11 * 60 + 19) - (9 * 60 + 43)) / 2) {
        printf("Closest departure time: 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (user_minutes_since < 11 * 60 + 19 && user_minutes_since <= (11 * 60 + 19) - ((11 * 60 + 19) - (9 * 60 + 43)) / 2){
        printf("Closest departure time: 9:43 a.m., arriving at 11:52 a.m.");
    }

    else if (user_minutes_since < 12 * 60 + 47 && user_minutes_since >= (12 * 60 + 47) - ((12 * 60 + 47) - (11 * 60 + 19)) / 2) {
        printf("Closest departure time: 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (user_minutes_since < 12 * 60 + 47 && user_minutes_since <= (12 * 60 + 47) - ((12 * 60 + 47) - (11 * 60 + 19)) / 2){
        printf("Closest departure time: 11:19 a.m., arriving at 1:31 p.m.");
    }

    else if (user_minutes_since < 14 * 60 + 0 && user_minutes_since >= (14 * 60 + 0) - ((14 * 60 + 0) - (12 * 60 + 47)) / 2) {
        printf("Closest departure time: 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if (user_minutes_since < 14 * 60 + 0 && user_minutes_since <= (14 * 60 + 0) - ((14 * 60 + 0) - (12 * 60 + 47)) / 2) {
        printf("Closest departure time: 12:47 p.m., arriving at 3:00 p.m.");
    }

    else if (user_minutes_since < 15 * 60 + 45 && user_minutes_since >= (15 * 60 + 45) - ((15 * 60 + 45) - (14 * 60 + 0)) / 2) {
        printf("Closest departure time: 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (user_minutes_since < 15 * 60 + 45 && user_minutes_since <= (15 * 60 + 45) - ((15 * 60 + 45) - (14 * 60 + 0)) / 2) {
        printf("Closest departure time: 2:00 p.m., arriving at 4:08 p.m.");
    }

    else if (user_minutes_since < 19 * 60 + 0 && user_minutes_since >= (19 * 60 + 0) - ((19 * 60 + 0) - (15 * 60 + 45)) / 2) {
        printf("Closest departure time: 7:00 p.m., arriving at 9:20 p.m.");
    }
    else if (user_minutes_since < 19 * 60 + 0 && user_minutes_since <= (19 * 60 + 0) - ((19 * 60 + 0) - (15 * 60 + 45)) / 2) {
        printf("Closest departure time: 3:45 p.m., arriving at 5:55 p.m.");
    }

    else if (user_minutes_since < 21 * 60 + 45 && user_minutes_since >= (21 * 60 + 45) - ((21 * 60 + 45) - (19 * 60 + 0)) / 2) {
        printf("Closest departure time: 9:45 p.m., arriving at 11:58 p.m.");
    }
    else if  (user_minutes_since < 21 * 60 + 45 && user_minutes_since <= (21 * 60 + 45) - ((21 * 60 + 45) - (19 * 60 + 0)) / 2) {
        printf("Closest departure time: 7:00 p.m., arriving at 9:20 p.m.");
    }


    return 0;
}