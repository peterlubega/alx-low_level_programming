#include "main.h"

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to be printed
 *
 * Return: On success 1, on error -1.
 */

int _putchar(char c);

/**
 * _puts - prints a string to stdout, followed by a new line
 *
 * @str: the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
