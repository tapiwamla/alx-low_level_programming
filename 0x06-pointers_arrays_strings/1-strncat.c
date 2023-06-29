#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be taken from src
 * Description: Concatenates at most n bytes from src to the end of dest.
 * The src string does not need to be null-terminated if it contains n or more bytes.
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int length = 0;
int i;

while (dest[length] != '\0')
{
length++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[length] = src[i];
length++;
}
dest[length] = '\0';
return (dest);
}
