#include "main.h"

char *create_custom_buffer(char *filename);
void close_file(int fd);

/**
 * allocate_custom_buffer - Allocates 1024 bytes for a custom buffer.
 * @filename: The buffer stores characters for this file.
 * Return: A pointer to the new custom buffer.
 */

char *create_custom_buffer(char *filename)
{
char *custom_buffer;

custom_buffer = malloc(sizeof(char) * 1024);

if (custom_buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", filename);

exit(99);
}

return (custom_buffer);
}

/**
 * close_file - Closes file.
 * @fd: File to be closed (descriptor).
 */

void close_file(int fd)
{
int _close;

_close = close(fd);

if (_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

