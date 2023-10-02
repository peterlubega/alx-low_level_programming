/**
 * _strcpy - Copies a string to a buffer, including the null byte
 * @dest: Pointer to the buffer to copy the string to
 * @src: Pointer to the string to be copied
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';

return (dest);
}
