#include <stdio.h>
/**
 * main - entry point of application
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of a short: %i byte(s)\n", sizeof(short));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long: %i byte(s)\n", sizeof(long));
printf("Size of a long long: %i byte(s)\n", sizeof(long long));
printf("Size of a float: %i byte(s)\n", sizeof(float));
printf("Size of a double: %i byte(s)\n", sizeof(double));
printf("Size of a long double: %i byte(s)\n", sizeof(long double));
return (0);
}
