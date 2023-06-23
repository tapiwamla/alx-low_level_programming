#include "main.h"
/**
* print_numbers - prints 0-9
* Return: null
*/
void print_numbers(void)
{
char num = '0';

while (num <= '9')
{
_putchar(num);
num++;
}
_putchar('\n');
return;
}
