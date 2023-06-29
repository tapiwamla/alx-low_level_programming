#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be taken from src
 *
 * Description:
 * Concatenates at most n bytes from src to the end of dest.
 * No need to null-terminate c if it contains n or more bytes.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int length = 0;
    int i;

    while (dest[length] != '\0')
    {
        length++;
    }

    i = 0;
    
    for (; i < n && src[i] != '\0'; i++)
    {
        dest[length] = src[i];
        length++;
    }
    dest[length] = '\0';

    return dest;
}
