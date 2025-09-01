//
// Created by raphael on 25/07/25.
//

#include <stdio.h>


int main(void) {

    float balance, interest_rate, monthly_payment;
    int num_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_of_payments);
    printf("\n");

    interest_rate = (interest_rate / 100) / 12;

    for (int i = 1; i <= num_of_payments; ++i) {
        balance = ((  - monthly_payment) + balance * interest_rate);
        printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    }


    return 0;
}