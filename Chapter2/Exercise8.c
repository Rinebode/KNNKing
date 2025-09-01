//
// Created by raphael on 20/07/25.
//

#include <stdio.h>


int main(void) {

    float balance, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate = (interest_rate / 100) / 12;

    //Month one
    balance = (( balance - monthly_payment) + balance * interest_rate);
    printf("Balance remaining after first payment: $%.2f\n", balance);

    //Month Two
    balance = ((balance - monthly_payment) + balance * interest_rate);
    printf("Balance remaining after Second payment: $%.2f\n", balance);

    //Month Three
    balance = ((balance - monthly_payment) + balance * interest_rate);
    printf("Balance remaining after Third payment: $%.2f\n", balance);


    return 0;
}