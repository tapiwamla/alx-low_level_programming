#include <stdio.h>
/**
  * main - program entry point
  * Return: 0 (success)
  * Description: A program that prints all letters of the alphabet
  * except e and q
  */
int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != 'e' && lower != 'q')
{
putchar(lower);
}
}
putchar('\n');
return (0);
}
