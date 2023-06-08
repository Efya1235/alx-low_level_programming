#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    modify_bit_value(&n, 10);
    printf("%lu\n", n);
    n = 0;
    modify_bit_value(&n, 10);
    printf("%lu\n", n);
    n = 98;
    modify_bit_value(&n, 1);
    printf("%lu\n", n);
    return (0);
}
