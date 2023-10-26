/**
 * flip_bits - Counts the number of bits to flip to get from
 * one number to another.
 *
 * @n: The first unsigned long integer.
 *
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

/* Iterate through the XOR result to count the number of set bits (1s). */
while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
