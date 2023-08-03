#include "main.h"

/**
 * flip_bits - Counts the number of bits to change to get, 
 * from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (index = 63; index >= 0; index--)
{
current = exclusive >> index;

if (current & 1)
count++;
}

return (count);
}

