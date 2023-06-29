#include <main.h>
/**
 * _strcat - function to concatenate 2 strings
 * @dest: arg 1
 * @src: arg 2
 * Return: dest
 */
char* _strcat(char* dest, char* src)
{
char* ptr = dest;

while (*ptr != '\0')
{
ptr++;
}

while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}

*ptr = '\0';

return (dest);
}
