#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: the number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
int find_sqrt(int i, int j);
return (find_sqrt(1, n));
}

/**
 * find_sqrt - recursion function to find square root
 * @i: number to square
 * @j: square of i
 * Return: number
 */

int find_sqrt(int i, int j)
{

if (i * i > j)
return (-1);

if (i * i == j)
return (i);

else
return (find_sqrt((i + 1), j));
}
