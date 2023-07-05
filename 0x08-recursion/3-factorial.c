#include "main.h"

/**
 * factorial - print factorial of a given number
 * @n: the number
 * Return: factorial
 */

int factorial(int n)

{

if (n < 0)
return (-1);

if (n == 1 || n == 0)
return (1);

return (n * factorial(n - 1));

}
