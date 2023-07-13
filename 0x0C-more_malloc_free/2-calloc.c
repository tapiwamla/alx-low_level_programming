#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: total elements
  * @size: element size
  * Return: pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int m, p = 0, i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

p = nmemb * size;

ptr = malloc(p);

while (ptr == NULL)
{
return (NULL);
}

for (m = 0; m < nmemb; m++)
{

for (i = 0; i < size; i++)
{
ptr[m * size + i] = 0;
}
}

return (ptr);
}
