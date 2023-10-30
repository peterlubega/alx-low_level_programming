#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
size_t read_count, write_count;

if (filename == NULL)
return (0);

/* Attempt to open the file for reading. */
file = fopen(filename, "r");
if (file == NULL)
return (0); /* On failure to open file*/

buffer = malloc(letters);
if (buffer == NULL)
{
fclose(file);
return (0); /* If memory allocation fails */
}

/* Read data from the file into the buffer. */
read_count = fread(buffer, 1, letters, file);

/* Write the read data to the standard output. */
write_count = write(STDOUT_FILENO, buffer, read_count);

/* Close the file, free the buffer, and check for write success. */
fclose(file);
free(buffer);

if (read_count == write_count)
return (read_count);
else
return (0);
}
