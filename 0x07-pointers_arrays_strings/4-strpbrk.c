#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any byte from `accept` in `s`.
 * @s: The string to search in.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *pointer = accept;
while (*pointer != '\0')
{
if (*pointer == *s)
return (s);

pointer++;
}
s++;
}
return ('\0');
}
