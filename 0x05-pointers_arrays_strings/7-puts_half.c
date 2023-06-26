#include "main.h"
/**
* puts_half - print half of the string
* @str: the input
* Return: void
*/
void puts_half(char *str)
{
int i;
int j;
int length;

length = 0;

for (i = 0; str[i] != '\0'; i++)
{
length++;
}

j = (length / 2);

if ((length % 2) == 1)
{
j = ((length + 1) / 2);
}

for (i = j; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
