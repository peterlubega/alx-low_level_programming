/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *)&num;

/* If the least significant byte is 1, it's a little-endian system. */
if (*byte_ptr)
/* Little-endian */
return (1);
else
/* Big-endian */
return (0);
}
