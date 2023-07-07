#include "main.h"
/**
 * _strlen - calculate length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
char *p = s;

while (*p != '\0')
{
p++;
}
return (p - s);
}
