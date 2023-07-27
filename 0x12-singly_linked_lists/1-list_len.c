#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * @h: list_t list pointer
 * Return: total number of elements in h
 */

size_t list_len(const list_t *h)
{
size_t size = 0;

while (h)
{
size++;
h = h -> next;
}
return (size);
}
