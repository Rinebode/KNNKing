//
// Created by raphael on 22/07/25.
//


#include <stdio.h>

int main(void) {

   int user_num, digits;

   printf("Enter a number: ");
   scanf("%d", &user_num);

   if (user_num >= 0 && user_num < 9)
      digits = 1;
   else if (user_num >= 10 && user_num < 99)
      digits = 2;
   else
      digits = 3;

   printf("The number %d has %d digits", user_num, digits);

   return 0;
}
