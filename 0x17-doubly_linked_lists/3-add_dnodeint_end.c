#include "lists.h"

/**
 * add_dnodeint_end - to add a new node at the end of a list.
 * @head: a pointer to the head of a list.
 * @n: a number to be added to the list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* If the list is empty... */
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;

		return (new);
	}

	/* If the list is not empty... */
	while (start->next)
	{
		start = start->next;
	}

	start->next = new;
	new->prev = start;
	new->next = NULL;
	new->n = n;

	return (new);
}

