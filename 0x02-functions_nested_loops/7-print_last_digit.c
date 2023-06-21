#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be evaluated
 * Return:  0 (success)
 */
int print_last_digit(int n)
{
int last_number = n % 10;
if (last_number < 0)
last_number *= -1;
_putchar(last_number + '0');
return (n % 10);
}
