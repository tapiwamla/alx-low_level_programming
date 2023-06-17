#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 (success)
 */
int main(void)
{
int first, second;
for (first = 0; first <= 99; first++)
{
for (second = first + 1; second <= 99; second++)
{
putchar(first / 10 + '0');
putchar(first % 10 + '0');
putchar(' ');
putchar(second / 10 + '0');
putchar(second % 10 + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
