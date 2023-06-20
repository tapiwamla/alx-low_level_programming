#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * return: 0 (success)
 */
void print_alphabet(void)
{
char character = 'a';
while (character <= 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
}
