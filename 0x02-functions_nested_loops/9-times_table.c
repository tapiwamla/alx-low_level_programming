#include "main.h"
/**
 * times_table - Prints the multiplication table from 0 to 9
 */
void times_table(void)
{
int row = 0, column, product;

while (row < 10)
{
column = 0;
while (column < 10)
{
product = (row * column);
if (product < 10)
{
if (column != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(product + '0');
}
else
{
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
if (column != 9)
_putchar(',');
column++;
}
_putchar('\n');
row++;
}
}
