#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - entry point of the program
  * Return: (0), success
  */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int h;

srand(time(0));
n = rand() - RAND_MAX / 2;
h = n[-1];
if (h > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, h);
}
if (h == 0)
{
printf("Last digit of %d is %d and is 0\n", n, h);
}
if
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, h);
}
/* your code goes there */
return (0);
}
