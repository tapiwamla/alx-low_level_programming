#include "lists.h"

/**
 * add_dnodeint - to add a new node at the beginning of a dlistint_t list.
 * @head: a pointer to the head of the list.
 * @n: the data to be added to the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}

