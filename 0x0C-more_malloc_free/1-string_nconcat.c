#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ptr;
unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

while (s1[len1] != '\0')
{
len1++;
}

while (s2[len2] != '\0')
{
len2++;
}

if (n > len2)
{
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
}

else
{
ptr = malloc(sizeof(char) * (len1 + n + 1));
}

if (ptr == NULL)
{
return (NULL);
}

while (x < len1)
{
ptr[x] = s1[x];
x++;
}

while (n < len2 && x < (len1 + n))
{
ptr[x] = s2[y];
x++;
y++;
}

while (n > len2 && x < (len1 + len2))
{
ptr[x] = s2[y];
x++;
y++;
n--;
}

ptr[x] = '\0';

return (ptr);
}
