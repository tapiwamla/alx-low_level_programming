#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point of the program
 * Return: (0), success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	if(n<0)
	  {
	    printf("%d is negative", n);
	  }
	else
	  {
	    printf("%d is positive", n);
	  }
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
