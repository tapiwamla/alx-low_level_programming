#include <stdio.h>
#include <stdlib.h>
/**
 *main - product of 2 numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
int count, num1, num2, product;
char error[] = "Error";
if (argc != 3)
{
printf("%s\n", error);
return (1);
}
for (count = 0; count < argc; a++)
{
num1 = atoi(*(argv + 1));
num2 = atoi(argv[2]);
}
product = num1 * num2;
printf("%d\n", product);
return (0);
}