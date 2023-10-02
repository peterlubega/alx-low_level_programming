#include <stdio.h>

/**
   * main - prints all arguments received
    * @argc: the number of arguments
     * @argv: an array containing the arguments
      *
       * Return: 0 on success
        */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

