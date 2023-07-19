#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter
 * @array: array
 * @size: elements(n)
 * @action: print f
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
