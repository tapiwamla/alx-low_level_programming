#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int first_sum = 0;
int second_sum = 0;

for (i = 0; i < size; i++)
{
first_sum += a[i * size + i];
}
for (i = 0; i < size; i++)
{
second_sum += a[i * size + (size - 1 - i)];
}
printf("%d, %d", first_sum, second_sum);
printf("\n");
}
