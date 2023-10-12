#include "lists.h"

/**
 * dlistint_len - to print the length of a linked list.
 * @h: a pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	int index = 0;

	for (index = 0; h; index++)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}

