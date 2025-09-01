//
// Created by raphael on 28/07/25.
//

#include <stdio.h>

int main(void) {

    printf("Sum: %zd", sizeof(int) + sizeof(short) + sizeof(long) + sizeof(float) + sizeof(double) + sizeof(long));
}

/*
*
int main(void)
{
  printf("Size of int: %d\n", (int) sizeof(int));
  printf("Size of short: %d\n", (int) sizeof(short));
  printf("Size of long: %d\n", (int) sizeof(long));
  printf("Size of float: %d\n", (int) sizeof(float));
  printf("Size of double: %d\n", (int) sizeof(double));
  printf("Size of long double: %d\n", (int) sizeof(long double));

  return 0;
}

 */