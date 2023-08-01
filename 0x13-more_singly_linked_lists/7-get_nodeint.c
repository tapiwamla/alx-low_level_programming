#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: pointer to head node of the list.
 * @index:  list position [index].
 * Return: the nth element of the list.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp_node = head;
unsigned int count = 0;

if (head == NULL)
return (NULL);

while (count < index)
{
count++;
temp_node = temp_node->next;
if (temp_node == NULL)
return (NULL);
}

return (temp_node);
}

