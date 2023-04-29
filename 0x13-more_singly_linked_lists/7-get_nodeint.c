#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: The first node in the linked list
 * @index: Index of the node returned
 *
 * Return: if the node does not exist, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *temp = head;

	while (temp && m < index)
	{
		temp = temp->next;
		m++;
	}

	return (temp ? temp : NULL);
}

