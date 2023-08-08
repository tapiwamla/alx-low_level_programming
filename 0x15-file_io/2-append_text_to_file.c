#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Pointer to the name of the file.
 * @text_content: The text to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL, returns -1.
 * Otherwise, returns 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int my_file, _written, _length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (_length = 0; text_content[_length];)
_length++;
}

my_file = open(filename, O_WRONLY | O_APPEND);
_written = write(my_file, text_content, _length);

if (my_file == -1 || _written == -1)
return (-1);

close(my_file);

return (1);
}

