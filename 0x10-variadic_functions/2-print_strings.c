#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - print strings, followed by a new line.
 * @separator: the string to be printed.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vs;
char *str;
unsigned int x;


va_start(vs, n);


for (x = 0; x < n; x++)
{
str = va_arg(vs, char *);


if (str == NULL)
printf("(nil)");
else
printf("%s", str);


if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}


printf("\n");


va_end(vs);
}

