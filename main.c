#include <stdio.h>
#include <stdint.h>



int main(void) {
    typedef int8_t Int8;
    typedef int16_t Int16;
    typedef int32_t Int32;

    Int8 a = 40;
    Int16 b = 6000;
    Int32 c = 500000;

    printf("Hello, World \n %d\n%d\n%d\n", a, b, c);
    return 0;
}