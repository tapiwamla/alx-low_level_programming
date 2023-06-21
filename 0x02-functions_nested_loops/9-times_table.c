#include "main.h"
/**
 * times_table - Prints the multiplication table from 0 to 9
 */
void times_table(void)
{
int row = 0;
int column, product;

while (row <= 9)
{
column = 0;
while (column <= 9)
{
product = row * column;
if (column != 0)
{
_putchar(',');
_putchar(' ');
}
if (product >= 10)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else
{
_putchar(' ');
_putchar(product + '0');
}
column++;
}
_putchar('\n');
row++;
}
}
