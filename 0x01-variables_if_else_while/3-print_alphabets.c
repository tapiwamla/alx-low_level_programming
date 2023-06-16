#include <stdio.h>
/**
  * main - program entry point
  * Return: 0 (success)
  * Description: A program that prints all letters of the alphabet
  */
int main(void)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
