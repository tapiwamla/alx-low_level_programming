#include "main.h"

/**
 * read_textfile - Reads a text file and prints to standard output.
 * @filename: The name of the text file that is to be read.
 * @letters: The number of letters that are to be read.
 * Return: The actual number of bytes read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *this_buffer;
ssize_t f_descriptor;
ssize_t w_bytes;
ssize_t r_bytes;

f_descriptor = open(filename, O_RDONLY);
if (f_descriptor == -1)
{
return (0);
}

this_buffer = malloc(sizeof(char) * letters);

r_bytes = read(f_descriptor, this_buffer, letters);

w_bytes = write(STDOUT_FILENO, this_buffer, r_bytes);

free(this_buffer);
close(f_descriptor);
return (w_bytes);
}

