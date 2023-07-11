#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *copy;
int i;
int size;

if (str == NULL)
return (NULL);

size = 0;

while (str[size] != '\0')
size++;

copy = malloc(sizeof(*str) * (size + 1));

if (copy == NULL)
return (NULL);

for (i = 0; str[i]; i++)
copy[i] = str[i];

return (copy);
}
