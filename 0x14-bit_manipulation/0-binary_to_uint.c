#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 * Return: The decimal equivalent of the binary number as an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
int count;
unsigned int decimal_value = 0;

if (!b)
return (0);

for (count = 0; b[count]; count++)
{
if (b[count] < '0' || b[count] > '1')
return (0);
decimal_value = 2 * decimal_value + (b[count] - '0');
}

return (decimal_value);
}

