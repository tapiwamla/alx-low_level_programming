#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 *
 * Return: Pointer to the beginning of the located substring
 * NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;

for (; haystack[i] != '\0'; i++)
{
for (; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}

if (needle[j] == '\0')
{
return (haystack + i);
}
}

return ('\0');
}
