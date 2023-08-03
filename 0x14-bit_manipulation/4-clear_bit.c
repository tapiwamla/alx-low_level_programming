#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @index: Index of the bit to be cleared.
 * @n: Pointer to the number whose bit is to be modified.
 * Return: 1 if succesful -1 if error occurred.
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long to_clear;

if (index > sizeof(unsigned long) * 8)
return (-1);

to_clear = ~(1 << index);
*n = *n & to_clear;

return (1);
}

