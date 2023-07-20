#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters.
 * @n: param (n).
 * @...: for variable param (n).
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list vl;
unsigned int i, sum = 0;


va_start(vl, n);


for (i = 0; i < n; i++)
sum += va_arg(vl, int);


va_end(vl);


return (sum);
}

