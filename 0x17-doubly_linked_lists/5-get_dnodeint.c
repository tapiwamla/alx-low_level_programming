#include "lists.h"

/**
 * get_dnodeint_at_index - to get node by index.
 * @head: a pointer to the head of the list.
 * @index: the index of the node.
 * Return: the node at index or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}

	if (c < index)
	{
		return (NULL);
	}

	return (head);
}

