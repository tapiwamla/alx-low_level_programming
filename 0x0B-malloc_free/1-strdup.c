#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer
 * Return: copy of string, NULL if str is NULL
 */

char *_strdup(char *str)
{
int i;
int size;

char *copy;

if (str == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
{
copy = malloc(size + 1 * sizeof(*str));

if (copy == 0)
return (NULL);

else
{
for (i = 0; i <= size; i++)
copy[i] = str[i];
}
}
return (copy);
}
