#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 (success)
 * Description: Print 0-9
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
