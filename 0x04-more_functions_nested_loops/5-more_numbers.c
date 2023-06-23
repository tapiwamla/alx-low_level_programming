#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * followed by a new line
 * Return: void
 */
void more_numbers(void)
{
int i, j;
char num;

for (i = 0; i < 10; i++)
{
num = '0';

for (j = 0; j <= 14; j++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
num++;
}
}
_putchar('\n');
}
