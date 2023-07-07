#include "main.h"
/**
 * main - program entry point
 * Return: 0 (success)
 * Description: print without std library
 */
int main(void)
{
char *text = "_putchar\n";
int i = 0;

while (text[i] != '\0')
{
_putchar(text[i]);
i++;
}
return (0);
}
