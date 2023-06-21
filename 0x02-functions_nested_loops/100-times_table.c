#include "main.h"
/**
 * * print_times_table - Prints the n times table
 * * @n: The number to generate the times table for
 * */
void print_times_table(int n)
{
	int row;
	int column;

	if (n > 15 || n < 0)
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			int product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');
			}

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
