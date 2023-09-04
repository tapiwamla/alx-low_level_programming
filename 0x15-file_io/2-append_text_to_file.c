#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Points to the file's name.
 * @text_content: The text to append to file.
 * Return: 1 for success, -1 for any failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int this_file, w_bytes, this_length = 0;

/* If filename is NULL return -1. */
if (filename == NULL)
{
return (-1);
}

/* If the text content is NULL then create empty file. */
if (text_content != NULL)
{
for (this_length = 0; text_content[this_length];)
this_length++;
}

/* Open file with O_APPEND to append to end of file. */
this_file = open(filename, O_WRONLY | O_APPEND);
w_bytes = write(this_file, text_content, this_length);

if (this_file == -1 || w_bytes == -1)
{
return (-1);
}

close(this_file);

return (1);
}

