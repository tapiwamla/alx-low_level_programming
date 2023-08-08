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

/**
 * main - This program copies the contents of one file to another file.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of argument pointers.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
int file_from, file_to, file_read, file_write;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_custom_buffer(argv[2]);
file_from = open(argv[1], O_RDONLY);
file_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (file_from == -1 || file_read == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

file_write = write(file_to, buffer, file_read);
if (file_to == -1 || file_write == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

file_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (file_read > 0);

free(buffer);
close_file(file_from);
close_file(file_to);

return (0);
}

