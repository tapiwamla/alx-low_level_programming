#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, strlen1 = 0, strlen2 = 0;

while (s1 && s1[strlen1])
{
strlen1++;
}

while (s2 && s2[strlen2])
{
strlen2++;
}

if (n < strlen2)
{
s = malloc(sizeof(char) * (strlen1 + n + 1));
}

else
{
s = malloc(sizeof(char) * (strlen1 + strlen2 + 1));
}

if (!s)
{
return (NULL);
}

while (i < strlen1)
{
s[i] = s1[i];
i++;
}

while (n < strlen2 && i < (strlen1 + n))
{
s[i++] = s2[j++];
}

while (n >= strlen2 && i < (strlen1 + strlen2))
{
s[i++] = s2[j++];
}

s[i] = '\0';

return (s);
}
