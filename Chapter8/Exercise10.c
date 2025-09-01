//
// Created by raphael on 02/08/25.
//

#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_TIMES = (int) sizeof(departure_times) / sizeof(depature_times[0])


int main(void) {

    int hh, mm, departure_times[8], arrival_times[8], user_time, lowest, departure_time;
    char format;

    // populate depatures
    printf("Departure times \n");
    for (int i = 0; i < 8; i++) {
        printf("Enter a time: ");
        scanf("%d:%d%c", &hh, &mm, &format);
        if (format == 'pm' && hh != 12) {
            hh += 12;
        }
        departure_times[i] = hh * 60 + mm;

        //Ingest remaining characters
        for (int i = 0; getchar() != '\n'; i++);
    }

    printf("\n%d", departure_times[3]);

    printf("\nArrival Times: \n");
    //populate arrivals
    for (int i = 0; i < 8; i++) {
        printf("Enter a time: ");
        scanf("%d:%d%1c", &hh, &mm, &format);
        if (format == 'pm' && hh != 12) {
            hh += 12;
        }
        arrival_times[i] = hh * 60 + mm;

        //Ingest remaining characters
        for (int i = 0; getchar() != '\n'; i++);
    }

    // get user info
    printf("\nEnter a 24-hour Departure time: ");
    scanf("%d:%d", &hh, &mm);
    user_time = hh * 60 + mm;


    lowest = abs(user_time - departure_times[0]);
    departure_time = 0;
    for (int i = 0; i < 8; i++) {
        if (abs(user_time - departure_times[i]) < lowest) {
            lowest = abs(user_time - departure_times[i]);
            departure_time = departure_times[i];
        }
    }


    printf("\nClosest departure time is %d:%d", departure_time / 60, departure_time % 60);

    return 0;

}