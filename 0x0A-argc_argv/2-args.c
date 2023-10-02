#include <stdio.h>

/**
   * main - prints all arguments received.
    * @argc: type int argument (argument count)
     * @argv: type char argument of string (argument vector).
      * Return: 0 (indicating successful execution)
       */
int main(int argc, char *argv[])
{
    int x;
    for (x = 0; x < argc; x++)
    {
    
         printf("%s\n", argv[x]);

     }

		    return 0;
}

