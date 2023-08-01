#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from a list.
 * @head: points to the head of the list.
 * @idx: the target index.
 * Return: 1 (success) or - 1 (fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
listint_t *temp_node, *temp_address;
unsigned int count;

temp_node = *head;
count = 0;

while (temp_node)
{
if (count == (idx - 1))
{
temp_address = (temp_node->next)->next;
free(temp_node->next);
temp_node->next = temp_address;

return (1);
}

else if (idx == 0)
{
temp_node = *head;
*head = (*head)->next;
free(temp_node);

return (1);
}

count++;
temp_node = temp_node->next;
}

return (-1);
}

