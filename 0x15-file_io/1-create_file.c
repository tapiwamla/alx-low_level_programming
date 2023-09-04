#include "main.h"

/**
 * create_file - Create a file.
 * @filename: A pointer to the new filename.
 * @text_content: A pointer to the new file contents.
 * Return: 1 for success, -1 for any failure.
 */

int create_file(const char *filename, char *text_content)
{
int this_file;
int w_bytes;
int this_length = 0;

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

/* Create a file if it does not exist with O_CREAT. */
this_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

w_bytes = write(this_file, text_content, this_length);

/* If writing fails OR does not write my expected num of bytes return -1. */
if (this_file == -1 || w_bytes == -1)
{
return (-1);
}

close(this_file);

return (1);
}

