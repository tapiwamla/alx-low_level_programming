#include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: pointer list of type list_t
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
size_t size = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");

else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
size++;
}

return (size);
}
