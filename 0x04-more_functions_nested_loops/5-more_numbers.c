#include "main.h"
/**
* more_numbers - prints 10 times the numbers 0-14
* Return: void
*/
void more_numbers(void)
{
int i = 0;
int count = 0;

while (count < 10)
{
while (i <= 14)
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i++;
}
i = 0;
count++;
}

_putchar('\n');
}
