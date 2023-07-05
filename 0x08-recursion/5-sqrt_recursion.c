#include "main.h"

/**
 * _sqrt_recursion_helper - square root of a given number, conditions
 * @n: the number
 * @start: start search range
 * @end: end of search range
 * Return: roots
 */

int _sqrt_recursion_helper(int n, int start, int end)
{

int mid = (start + end) / 2;
int square = mid * mid;
 
if (start > end)
{
return (-1);
}

if (square == n)
{
return (mid);
}

else if (square < n)
{
return (_sqrt_recursion_helper(n, mid + 1, end));
}

else 
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}

}

/**
 * _sqrt_recursion - square root of a given number, actual
 * @n: the number
 * Return: square root
 */


int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

return (_sqrt_recursion_helper(n, 0, n));
}
