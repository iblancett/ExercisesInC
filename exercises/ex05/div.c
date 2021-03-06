/*  Code for Think OS.

Copyright 2016 Allen B. Downey
License: MIT License https://opensource.org/licenses/MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union FloatIntUnion {
    float f;
    uint32_t i;
} b;

/* Get the exponent part of a float.
*/
uint32_t get_exponent(float x) {
    b.f = x;
    uint32_t mask = 0xff;
    uint32_t expon = (b.i >> 23) & mask;
    return expon;
}

/* Divide a float by a power of two.
*/
float div_by_pow_2(float x, int n)
{
    int mant;
    int exp = 126;
    int mask = 1;
    b.f = x;

    while (b.x & mask) {
        mask <<= 1;
        exp--;
    }


    mant = x >> 8;
    b.i = (exp << 23-n) | mant;

    return b.f;
}

void main() {
    float y = div_by_pow_2(4.82, 1);
    printf("%f\n", y);
}
