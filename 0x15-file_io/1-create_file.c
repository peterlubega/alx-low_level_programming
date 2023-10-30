#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * create_file - Creates a file with specified permissions
 * and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int file_descriptor, write_status;

if (filename == NULL)
return (-1); /* Return -1 if the filename is NULL. */

/* Create or open the file with read and write permissions (rw-------). */
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1); /* Return -1 on file creation or open failure. */

if (text_content == NULL)
{
close(file_descriptor);
return (1); /* Return 1 for success with an empty file. */
}

/* Write the provided text_content to the file. */
write_status = write(file_descriptor, text_content, strlen(text_content));

if (write_status == -1)
{
close(file_descriptor);
return (-1); /* Return -1 on write failure. */
}

close(file_descriptor);
return (1); /* Return 1 on successful file creation and writing. */
}
