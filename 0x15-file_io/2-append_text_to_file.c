#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_status;

if (filename == NULL)
return (-1); /* Return -1 if the filename is NULL. */

/* Open the file for appending (O_APPEND) with write-only permissions. */
file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (file_descriptor == -1)
return (-1); /* If the file does not exist or if you don't have permission. */

if (text_content == NULL)
{
close(file_descriptor);
return (1); /* Return 1 if text_content is NULL (no action needed). */
}

/* Write the provided text_content to the end of the file. */
write_status = write(file_descriptor, text_content, strlen(text_content));

if (write_status == -1)
{
close(file_descriptor);
return (-1); /* Return -1 on write failure. */
}

close(file_descriptor);
return (1); /* Return 1 on successful append operation. */
}
