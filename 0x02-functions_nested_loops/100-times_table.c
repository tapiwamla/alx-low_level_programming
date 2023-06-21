#include "main.h"
/**
 * print_times_table - Prints the multiplication table from 0 to n
 * @n: The number up to which the multiplication table is printed
 */
void print_times_table(int n)
{
  if (n > 15 || n < 0)
    return;

  int row;
  int column;
  int product;

  for (row = 0; row <= n; row++)
    {
      for (column = 0; column <= n; column++)
	{
	  product = row * column;
	  if (product < 10)
	    {
	      if (column != 0)
		{
		  _putchar(' ');
		  _putchar(' ');
		}
	      _putchar(product + '0');
	    }
	  else if (product < 100)
	    {
	      _putchar(' ');
	      _putchar((product / 10) + '0');
	      _putchar((product % 10) + '0');
	    }
	  else
	    {
	      _putchar((product / 100) + '0');
	      _putchar(((product / 10) % 10) + '0');
	      _putchar((product % 10) + '0');
	    }
	  if (column != n)
	    _putchar(',');
	}
      _putchar('\n');
    }
}
