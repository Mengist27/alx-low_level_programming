#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the linked list is empty and the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (m);
}

