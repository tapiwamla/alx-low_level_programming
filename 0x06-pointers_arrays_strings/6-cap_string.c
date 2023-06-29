#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
int i = 0;
int j = 0;
char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{
str[i] = str[i] - 'a' + 'A';
}
else
{
j = 0;

while (j <= 12)
{
if (separators[j] == str[i - 1])
{
str[i] = str[i] - 'a' + 'A';
break;
}
j++;
}
}
}
i++;
}

return (str);
}
