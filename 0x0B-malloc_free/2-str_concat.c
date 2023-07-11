#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
char *string;
int i;
int j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = 0;
j = 0;

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;
string = malloc(sizeof(*string) * (i + j + 1));

if (string == NULL)
return (NULL);

i = 0;
j = 0;

while (s1[i] != '\0')
{
string[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
string[i] = s2[j];
i++;
j++;
}
string[i] = '\0';
return (string);
}
