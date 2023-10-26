/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (0 being the least significant bit).
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{

/* Return -1 for an out-of-range index. */
return (-1);
}

/* Set the bit at the given index to 1 using bitwise OR. */
*n = *n | (1ul << index);

/* Return 1 to indicate success. */
return (1);
}
