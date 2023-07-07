#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of characters to be copied
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
