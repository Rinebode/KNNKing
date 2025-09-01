//
// Created by raphael on 22/07/25.
//

/* broker.c (Chapter 5, page 81) */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, rival_comm, num_shares, share_price;

    printf("Enter the number of shares: ");
    scanf("%f", &num_shares);

    printf("Enter the price per share: ");
    scanf("%f", &share_price);

    if (num_shares < 2500.00f) {
        commission = 30.00f + num_shares * share_price;
        if (num_shares < 2000.00f)
            rival_comm = 33.00f + num_shares * 0.02f;
        else
            rival_comm = 33.00f + num_shares * 0.03f;
    }
    else if (num_shares < 6250.00f) {
        commission = 56.00f + num_shares * share_price;
        rival_comm = 33.00f + num_shares * 0.03f;
    }
    else if (num_shares < 20000.00f) {
        commission = 76.00f + num_shares * share_price;
        rival_comm = 33.00f + num_shares * 0.03f;
    }
    else if (num_shares < 50000.00f) {
        commission = 100.00f + num_shares * share_price;
        rival_comm = 33.00f + num_shares * 0.03f;
    }
    else if (num_shares < 500000.00f) {
        commission = 155.00f + num_shares * share_price;
        rival_comm = 33.00f + num_shares * 0.03f;
    }
    else {
        commission = 255.00f + num_shares * share_price;
        rival_comm = 33.00f + num_shares * 0.03f;
    }

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rival_comm);

    return 0;
}