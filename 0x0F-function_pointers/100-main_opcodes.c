#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: arg (n)
 * @argv: arg (v)
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int nbytes, i;
char *narray;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

nbytes = atoi(argv[1]);

if (nbytes < 0)
{
printf("Error\n");
exit(2);
}

narray = (char *)main;

for (i = 0; i < nbytes; i++)
{
if (i == nbytes - 1)
{
printf("%02hhx\n", narray[i]);
break;
}
printf("%02hhx ", narray[i]);
}
return (0);
}
