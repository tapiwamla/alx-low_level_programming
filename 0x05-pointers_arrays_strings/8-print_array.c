#include <stdio.h>
#include "main.h"
/**
* print_array - print n elements of int array
* @a: the arr
* @n: tot
* Return: void
*/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);

if (x == n - 1)
{
break;
}
else
{
printf(", ");
}
}
printf("\n");
}


