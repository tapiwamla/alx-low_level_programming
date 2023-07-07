#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 (success)
*/

int main(int argc, char **argv)
{
int first, second;

if (argc - 1 == 2)
{
first = atoi(argv[1]);
second = atoi(argv[2]);

printf("%d\n", first * second);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
