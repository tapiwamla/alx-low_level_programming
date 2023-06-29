#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Size of the array.
 *
 * Description: This function reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < (n / 2); i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
