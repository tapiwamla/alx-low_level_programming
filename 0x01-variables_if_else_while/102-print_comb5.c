#include <stdio.h>
/**
* main - program entry point
* Return: 0 (success)
*/
int main(void)
{
int first;
int second;
int combinations = 0;
for (first = 0; first <= 99; first++)
{
for (second = 0; second <= 99; second++)
{
if (first < second)
{
if (combinations > 0)
{
putchar(',');
putchar(' ');
}
putchar((first / 10) + '0');
putchar((first % 10) + '0');
putchar(' ');
putchar((second / 10) + '0');
putchar((second % 10) + '0');
combinations++;
}
}
}
putchar('\n');
return (0);
}
