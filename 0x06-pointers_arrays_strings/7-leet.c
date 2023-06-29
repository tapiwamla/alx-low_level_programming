#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
int i = 0;
int j;

char letters[] = "aeotlAEOTL";
char numbers[] = "4307143071";

while (str[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}

i++;
}

return (str);
}
