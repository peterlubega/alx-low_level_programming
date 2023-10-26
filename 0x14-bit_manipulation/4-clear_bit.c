/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear
 * (0 being the least significant bit).
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
/* Return -1 for an out-of-range index. */
return (-1);
}

/* Clear the bit at the given index to 0 using bitwise AND. */
*n = *n & ~(1ul << index);

/* Return 1 to indicate success. */
return (1);
}
