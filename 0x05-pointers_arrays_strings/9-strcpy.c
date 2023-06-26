#include "main.h"
/**
* puts_half - copies the string
* @dest: copies to
* @src: copies from
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;

while (*(src + i) != '\0')
{
i++;
}

j = 0;
for ( ; j < i ; j++)
{
dest[j] = src[j];
}

dest[i] = '\0';

return (dest);
}
