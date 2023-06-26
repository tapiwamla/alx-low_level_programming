#include "main.h"
/**
* print_rev - Prints a string in reverse followed by a new line
* @s: The string to be printed in reverse
*
* Return: None
*/
void print_rev(char *s)
{
int length = 0;

if (s != NULL)
{
/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
/* Print the string in reverse order */
for (length = length - 1; length >= 0; length--)
{
_putchar(s[length]);
}
}
_putchar('\n');
}
