#include "main.h"

/**
* print_chessboard - function to print the std chessboard.
* @a: piece pointer.
* Return: none
*/

void print_chessboard(char (*a)[8])
{
int row = 0;
int column = 0;

for (; row < 8; row++)
{
for (; column < 8; column++)
{
_putchar(a[row][column]);
}
_putchar('\n');
}
}
