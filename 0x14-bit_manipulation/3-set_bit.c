#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: The number whose bit to set.
 * @index: The index of the bit to set.
 * Return: 1 for success, -1 for error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int number;

/* Check if index exceeds number of bits in an unsigned long integer. */
if (index > (sizeof(unsigned long) * 8))
{
return (-1);
}

/* Left shift 1, index times. */
number = 1 << index;

/* Set the bit to 1 at the given index. */
*n = *n | number;

return (1);
}

