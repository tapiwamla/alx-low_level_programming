#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list.
 * @head: points to the head node of the linked list.
 * Return: sum.
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp_node = head;

while (temp_node)
{
sum = sum + temp_node->n;
temp_node = temp_node->next;
}

return (sum);
}

