#include "main.h"

/**
 * create_file - This function generates a new file.
 * @filename: A pointer to the name of the file that will be generated.
 * @text_content: A pointer to the string that will be written to the file.
 * Return: If the operation fails, the function returns -1.
 * Otherwise, it returns 1.
 */

int create_file(const char *filename, char *text_content)
{
int my_file, _written, _length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (_length = 0; text_content[_length];)
_length++;
}

my_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
_written = write(my_file, text_content, _length);

if (my_file == -1 || _written == -1)
return (-1);

close(my_file);

return (1);
}

