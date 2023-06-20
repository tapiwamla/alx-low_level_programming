#include "main.h"
/**
 * alphabet - print lowercase alphabet
 * return: 0 (success)
 */
void print_alphabet(void)
{
char character = 0;
while (character < 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
}
