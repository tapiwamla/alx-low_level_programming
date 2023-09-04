#include "main.h"

char *create_this_buffer(char *filename);
void close_this_file(int fd);

/**
 * allocate_this_buffer - To allocate 1024 bytes to a custom buffer.
 * @filename: File whose characters to store in custom buffer.
 * Return: Points to the new custom buffer.
 */

char *create_this_buffer(char *filename)
{
char *this_buffer;

/* Allocate 1024 bytes to custom buffer. */
this_buffer = malloc(sizeof(char) * 1024);

/* If malloc fails, error and exit with NULL. */
if (this_buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}

return (this_buffer);
}

/**
 * close_this_file - Closes this file.
 * @fd: The file to be closed's descriptor.
 */

void close_this_file(int fd)
{
int custom_close;

custom_close = close(fd);

/* If closing the file fails, error and exit with 100. */
if (custom_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Implements the copying of one file's contents to another file.
 * @argc: The number of passed arguments.
 * @argv: The array of passed arguments.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
int file_from, file_to, file_read, file_write;
char *buffer;

/* If the number of arguments is incorrect, error and exit with 97 (usage). */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/* Create a buffer to store the contents of the file. */
buffer = create_this_buffer(argv[2]);

/* Open the file to be copied from. */
file_from = open(argv[1], O_RDONLY);

/* Read the contents of the file to be copied from. */
file_read = read(file_from, buffer, 1024);

/* Open the file to be copied to. */
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

/* Write the contents of the file to be copied to. */
do {
if (file_from == -1 || file_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

file_write = write(file_to, buffer, file_read);

/* If writing fails, error and exit with 99 (cannot write to). */
if (file_to == -1 || file_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

file_read = read(file_from, buffer, 1024);

/* If the file to be copied from is closed, close the file to be copied to. */
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (file_read > 0);

/* Avoid memory leaks and close the files. */
free(buffer);
close_this_file(file_from);
close_this_file(file_to);

return (0);
}

