#include <stdio.h>
#include <stdlib.h>

/**
*main - print minimum number of coins for change
*@argc: argument count
*@argv: argument vector
*Return: always 0 (success)
*/

int main(int argc, char **argv)
{

int number, count, result = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
number = atoi(argv[1]);

if (number < 0)
{
printf("0\n");
return (0);
}

for (count = 0; count < 5; count++)
{
while (number >= coins[count])
{
number = number - coins[count];
result++;
}
}
printf("%d\n", result);

return (0);
}
