#include <stdio.h>
/**
 * main - program's entry point
 * return: 0 (success)
 * @n: the number of fibonacci numbers
 */
void print_fibonacci(int n);
int main(void)
{
print_fibonacci(50);
return (0);
}
void print_fibonacci(int n)
{
int i;
unsigned long fib1 = 1;
unsigned long fib2 = 2;
unsigned long next;

printf("%lu, %lu", fib1, fib2);
for (i = 3; i <= n; i++)
{
next = fib1 + fib2;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}
printf("\n");
}
