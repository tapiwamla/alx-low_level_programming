#include <stdio.h>
/**
 * find_even_fibonacci_sum - Find sum of evens
 * @limit: The upper limit for Fibonacci numbers.
 * main - entry point of the program.
 * Return: The sum of even-valued Fibonacci numbers.
 */
unsigned long find_even_fibonacci_sum(unsigned long limit);
/**
 * main - entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
unsigned long limit = 4000000;
unsigned long sum = find_even_fibonacci_sum(limit);
printf("%lu\n", sum);
return (0);
}
/**
 * find_even_fibonacci_sum - Find sum of evens
 * @limit: The upper limit for Fibonacci numbers.
 * Return: The sum of even-valued Fibonacci numbers.
 */
unsigned long find_even_fibonacci_sum(unsigned long limit)
{
unsigned long fib1 = 1;
unsigned long fib2 = 2;
unsigned long fib3;
unsigned long sum = 0;

while (fib2 <= limit)
{
if (fib2 % 2 == 0)
sum += fib2;
fib3 = fib1 + fib2;
fib1 = fib2;
fib2 = fib3;
}
return (sum);
}
