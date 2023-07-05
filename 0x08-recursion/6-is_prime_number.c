#include "main.h"

/**
 *is_prime_number - returns 1 for prime, 0 otherwise
 *@n: integer
 *Return: number
 */

int is_prime_number(int n)
{
int i = 1;
int prime_calc(int i, int j);

return (prime_calc(i, n));
}

/**
 *prime_calc - returns prime numbers
 *@i: count variable
 *@j: int
 *Return: int
 */
 
int prime_calc(int i, int j)
{

if (j == 1 || j == 25)
return (0);

else if (j <= 0)
return (0);

else if (j % 2 == 0)
return (0);

else if (j % 2 != 0)
return (1);

return (prime_calc(i * (i + 1), j));
}
