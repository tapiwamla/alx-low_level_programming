#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: number
 * Return: void, just printing
 */
void print_triangle(int size)
{
int a, b = 0;
int area;

if (size > 0)
{
while (b < size)
{
area = size - b - 1;
while (a < size)
{
if (area > a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
a++;
}
b++;
a = 0;
_putchar ('\n');
}
}
else
_putchar('\n');
}
