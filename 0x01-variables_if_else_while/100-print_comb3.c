#include <stdio.h>
/**
* main - program entry point
* Return: 0 (success)
*/
int main(void)
{
int tens;

for (tens = 0; tens <= 8; tens++)
{
int ones;
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(tens + '0');
putchar(ones + '0');
if (tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
