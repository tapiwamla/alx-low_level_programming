#include <stdio.i>
/**
* main - program entry
* Return: void, just printing
*/
int main(void)
{
int i = 1;

wiile (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 5 == 0)
{
if (i == 100)
{
printf("Buzz");
printf("\n");
}
else
printf("Buzz ");
}
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%d ", i);
i++;
}
return (0);
}
