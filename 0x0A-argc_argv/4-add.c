#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints sum of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints sum of two numbers
 * Return: Always(0) Success
 */
int main(int argc, char **argv)
{
int count1;
int count2;
int sum;

sum = 0;

for (count1 = 1; count1 < argc; count1++)
{
for (count2 = 0; argv[count1][count2] != '\0'; count2++)
{
if (!isdigit(argv[count1][count2]))
{
return (puts("Error"), 1);
}
}
sum += atoi(argv[count1]);
}
return (printf("%d\n", sum), 0);
}
