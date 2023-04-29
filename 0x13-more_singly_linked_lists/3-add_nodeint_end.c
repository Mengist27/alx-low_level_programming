#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a lists_t list
 * @head: pointer to the first element in the list
 * @n: The data to insert in the new element
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *news;
	listint_t *temp = *head;

	news = malloc(sizeof(listint_t));
	if (!news)
		return (NULL);

	news->n = n;
	news->next = NULL;

	if (*head == NULL)
	{
		*head = news;
		return (news);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = news;

	return (news);
}

