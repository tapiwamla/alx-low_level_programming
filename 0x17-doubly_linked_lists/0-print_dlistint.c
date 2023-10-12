#include "lists.h"

/**
 * print_dlistint - to print all the elements of a list.
 * @h: a pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int index;
	size_t len = 0;

	for (index = 0; h; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

return (len);
}

