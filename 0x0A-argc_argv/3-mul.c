#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
int product, first, second;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

first = atoi(argv[1]);
second = atoi(argv[2]);
product = first * second;

printf("%d\n", product);

return (0);
}

