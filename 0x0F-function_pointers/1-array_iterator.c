#include "function_pointers.h"

/**
 * print_name - execute function given as parameter
 * @name: string param
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
