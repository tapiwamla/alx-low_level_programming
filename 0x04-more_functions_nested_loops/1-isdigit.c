#include "main.h"
/**
* _isdigit - checks if a character is a number
* @c: the character to be checked
* Return: 1 if c is number, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
