#include "main.h"
/**
* print_alphabet_x10 - print lowercase alphabet 10 times
* Return: 0 (success)
*/
void print_alphabet_x10(void)
{
char character = 'a';
int count = 0;

while (count < 10)
{
while (character <= 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
count++;
character = 'a';
}
}
