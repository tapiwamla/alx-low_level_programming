#include "lists.h"


/**
 * insert_dnodeint_at_index - to insert a new node at a given position.
 * @h: a pointer to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *start;
	unsigned int c = 0, len = len_node(h);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	start = *h;
	while (start)
	{
		if (c == idx - 1)
		{
			break;
		}
		else if (c < idx - 1 && start == NULL)
		{
			return (NULL);
		}
		start = start->next;
		c++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (len == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (len < idx)
	{
		return (NULL);
	}
	start->next->prev = new;
	new->next = start->next;
	start->next = new;
	new->prev = start;
	new->n = n;
	return (new);
}


/**
 * len_node - to get the length of the list.
 * @node: a pointer to the head of the list.
 * Return: the length of the list.
 */
unsigned int len_node(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *start;

	start = *node;

	while (start != NULL)
	{
		len += 1;
		start = start->next;
	}
	return (len);
}

