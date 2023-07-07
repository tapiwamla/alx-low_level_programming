#include "main.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
char *str = argv[0];

while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');

return (0);
}
