#include "main.h"
/**
 * swap_int - swap 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
