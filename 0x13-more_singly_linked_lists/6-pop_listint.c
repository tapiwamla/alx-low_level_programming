#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the linked list head.
 * Return: data of the head node.
 */

int pop_listint(listint_t **head)
{
int n_data;

listint_t *temp_node;

if (*head == NULL)
return (0);

temp_node = *head;
*head = (*head)->next;
n_data = temp_node->n;

free(temp_node);

return (n_data);
}

