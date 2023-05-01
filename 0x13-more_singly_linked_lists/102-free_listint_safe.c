#include "lists.h"

/**
 * free_listint_safe - functions that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int mine;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		mine = *h - (*h)->next;
		if (mine > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			m++;
		}
		else
		{
			free(*h);
			*h = NULL;
			m++;
			break;
		}
	}

	*h = NULL;

	return (m);
}

