#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initializes it with a specific character
 * @size: array size
 * @c: the specific character
 * Return: Pointer to an array
 * or NULL if it fails, or if size is 0
 */

char *create_array(unsigned int size, char c)
{
char *array = malloc(size);

if (size == 0 || array == 0)
return (0);

while (size--)
array[size] = c;

return (array);
}
