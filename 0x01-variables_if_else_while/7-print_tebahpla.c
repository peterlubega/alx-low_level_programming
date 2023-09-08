#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
int i;

/* Loop through lowercase alphabet characters*/
/* in reverse order from 'z' to 'a'*/
for (i = 122; i >= 97; i--)
{
putchar(i); /* Print the current character*/
}

putchar('\n'); /* Print a new line*/
return (0);
}
