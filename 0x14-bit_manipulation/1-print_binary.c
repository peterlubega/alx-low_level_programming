#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 */

void print_binary(unsigned long int n)
{
/* Calculate the size of the number in bits */
int size = sizeof(n) * 8;
int i;
int is_printing = 0;

if (n == 0)
{
putchar('0');
return;
}

for (i = size - 1; i >= 0; i--)
{
/* Shift the number to the right and check the least significant bit */
int bit = (n >> i) & 1;

if (bit == 1)
is_printing = 1;

if (is_printing)

/* Print '0' or '1' */
putchar(bit + '0');
}
}
