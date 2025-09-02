//
// Created by raphael on 02/09/2025.
//

#include <ctype.h>
#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int roll_dice(void) {

    int dice1, dice2;

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}


bool play_game(void) {

    int first_roll, current_roll;

    first_roll = roll_dice();
    printf("You rolled: %d\n", first_roll);

    if (first_roll == 7 || first_roll == 11) return true;
    if (first_roll == 2 || first_roll == 3 || first_roll == 12) return false;

    printf("Your point is: %d\n", first_roll);

    for (;;) {

        current_roll = roll_dice();
        printf("You rolled: %d\n", current_roll);

        if (current_roll == first_roll)
            return true;
        if (current_roll == 7)
            return false;
    }

}

int main(void) {

    srand((unsigned) time(NULL));

    char play_again;
    bool player_won;
    int wins = 0, losses = 0;

    play_again = 'y';

    while (play_again == 'y') {

        player_won = play_game();

        if (player_won) {
            printf("You win!\n\n");
            ++wins;
        } else {
            printf("You lose!\n\n");
            ++losses;
        }


        for (;;) {
            printf("Play again? ");
            scanf("%c", &play_again);
            if (tolower(play_again) == 'y' || tolower(play_again) == 'n')
                break;
        }

        //get rid of newline character
        while (getchar() != '\n')
            ;
    }

    printf("\n");
    printf("Wins: %d\t\tLosses: %d", wins, losses);
    return 0;
}