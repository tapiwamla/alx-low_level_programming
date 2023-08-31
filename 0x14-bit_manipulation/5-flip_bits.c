#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: Integer one.
 * @m: Integer two.
 * Return: The number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index = 63;
int count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

/* Loop through each bit of the exclusive OR result. */
for (; index >= 0; index--)
{
current = exclusive >> index;

/* If the current bit is 1, increment count. */
if (current & 1)
{
count++;
}
}

return (count);
}

