#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n) {
    int i;

    for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
}
