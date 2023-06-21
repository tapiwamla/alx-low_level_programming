#include <stdio.h>
/**
 * print_fibonacci_numbers - Prints the first n Fibonacci numbers.
 * @count: The number of Fibonacci numbers to print.
 */
void print_fibonacci_numbers(int count)
{
int fib1 = 1;
int fib2 = 2;

printf("%d, %d, ", fib1, fib2);
int fib_next;
for (int i = 3; i <= count; i++)
{
fib_next = fib1 + fib2;
printf("%d", fib_next);

if (i < count)
printf(", ");
else
printf("\n");
fib1 = fib2;
fib2 = fib_next;
}
}
/**
 * main - Entry point of the program. *
 * Return: Always 0.
 */
int main(void)
{
int count = 98;
print_fibonacci_numbers(count);
return (0);
}
