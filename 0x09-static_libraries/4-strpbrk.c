#include <stdio.h>

/**
 * _strpbrk - search string
 * @s: a string to search
 * @accept: bytes
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
