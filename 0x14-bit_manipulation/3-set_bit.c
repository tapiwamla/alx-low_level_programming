#include "main.h"

/**
 * set_bit - Sets a bit to 1 at a given index.
 * @n: Points to the number to change.
 * @index: The index of the bit to set to 1.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int number;

if (index > (sizeof(unsigned long) * 8))
return (-1);

number = 1 << index;
*n = *n | number;

return (1);
}

