#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_binary(unsigned long int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    unsigned long int divisor = 1;
    while (divisor < n) {
        divisor <<= 1;
    }

    while (divisor != 0) {
        unsigned long int bit = n / divisor;
        n %= divisor;
        divisor >>= 1;
        printf("%lu", bit);
    }
}
