#include <stdio.h>
/**
 * main - program's entry point
 * return: 0 (success)
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
long long int fib1 = 1;
long long int fib2 = 2;
long long int next;

printf("%lld, %lld", fib1, fib2);
for (i = 3; i <= n; i++)
{
next = fib1 + fib2;
printf(", %lld", next);
fib1 = fib2;
fib2 = next;
}
printf("\n");
} 
