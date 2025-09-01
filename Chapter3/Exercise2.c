//
// Created by raphael on 20/07/25.
//

#include <stdio.h>

int main(void) {

    int item_number, purchase_date, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\t\tPrice\t\tDate\n%d\t\t\t$ %.2f\t\t%d/%d/%d", item_number, unit_price,
        month, day, year);

    return 0;
}
