#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
unsigned int index;
char *character;

/* Set index to 1 to check the first byte. */
index = 1;

/* Set character to index. */
character = (char *) &index;

return (*character);
}

