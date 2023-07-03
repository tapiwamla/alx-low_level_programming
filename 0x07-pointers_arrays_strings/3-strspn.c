#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The string of acceptable characters.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         consisting only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int i, j;
int accept_char;

for (i = 0; s[i] != '\0'; i++)
{
accept_char = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
accept_char = 1;
break;
}
}
if (!accept_char)
{
return (length);
}
length++;
}

return (length);
}
