#ifndef MAIN_H
#define MAIN_H

/* Include standard built-in libraries. */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <elf.h>

/* Custom dprintf function. */
int _dprintf(int fd, const char *format, ...)
{
int result;
va_list args;
va_start(args, format);

result = vdprintf(fd, format, args);

va_end(args);
return result;
}

/* Include ALX function prototypes. */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
