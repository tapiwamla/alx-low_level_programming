#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum.
 * @a: first no.
 * @b: second no.
 * Return: sum(a, b).
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Difference.
 * @a: first no.
 * @b: second no.
 * Return: diff(a, b).
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Product.
 * @a: first no.
 * @b: second no.
 * Return: prod(a, b).
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Quotient.
 * @a: first no.
 * @b: second no.
 * Return: div(a, b).
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Modulo.
 * @a: first no.
 * @b: second no.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
