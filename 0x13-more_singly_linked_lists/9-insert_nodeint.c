#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at specific index in a linked list.
 * @head: points to the head node of the linked list.
 * @idx: target index.
 * @n: data element of the new node.
 * Return: pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count;
listint_t *new_node;
listint_t *temp_node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (count = 0; temp_node && count < idx; count++)
{
if (count == idx - 1)
{
new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
else
temp_node = temp_node->next;
}

return (NULL);
}

