#include "lists.h"

/**
 * delete_dnodeint_at_index - to delete node at index.
 * @head: a pointer to the head of the list.
 * @index: the index of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	unsigned int i, len = len_node(head);

	start = *head;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		start = start->next;
		free(*head);
		*head = start;
		if (start != NULL)
		{
			start->prev = NULL;
		}
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		start = start->next;
		if (!start)
		{
			return (-1);
		}
	}
	if (len - 1 == index)
	{
		start->prev->next = NULL;
		free(start);
		return (1);
	}
	start->prev->next = start->next;
	start->next->prev = start->prev;
	free(start);
	return (1);
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

