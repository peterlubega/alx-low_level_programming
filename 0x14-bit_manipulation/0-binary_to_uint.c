#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_str: A pointer to a string containing a binary number.
 *
 * Return: An unsigned int with the decimal value of the binary number,
 * or 0 if there's an error.
 */

unsigned int binary_to_uint(const char *binary_str)
{
int index;
unsigned int decimal_value;

/* Initialize the result */
decimal_value = 0;
if (!binary_str)

/* Return 0 if the input string is NULL */
return (0);

for (index = 0; binary_str[index] != '\0'; index++)
{
if (binary_str[index] != '0' && binary_str[index] != '1')

/* Return 0 if an invalid character is encountered */
return (0);
}

for (index = 0; binary_str[index] != '\0'; index++)
{
/* Shift the result one bit to the left */
decimal_value <<= 1;
if (binary_str[index] == '1')

/* Set the least significant bit to 1 if '1' is encountered */
decimal_value += 1;
}

/* Return the converted unsigned integer */
return (decimal_value);
}
