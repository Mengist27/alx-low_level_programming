#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position,
 * at a given position
 * @head: The pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: The data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *news;
	listint_t *temp = *head;

	news = malloc(sizeof(listint_t));
	if (!news || !head)
		return (NULL);

	news->n = n;
	news->next = NULL;

	if (idx == 0)
	{
		news->next = *head;
		*head = news;
		return (news);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			news->next = temp->next;
			temp->next = news;
			return (news);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

