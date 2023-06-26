#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: None
 */
void rev_string(char *s)
{
int length, start, end;
char temp;

length = 0;
while (s[length] != '\0')
length++;

start = 0;
end = length - 1;

while (start < end)
{
/* Swap characters */
temp = s[start];
s[start] = s[end];
s[end] = temp;
/* Move to next pair of characters */
start++;
end--;
}
}
