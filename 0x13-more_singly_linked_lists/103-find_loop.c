#include "lists.h"

/**
 * find_listint_loop - function that  finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lower = head;
	listint_t *higher = head;

	if (!head)
		return (NULL);

	while (lower && higher && higher->next)
	{
		higher = higher->next->next;
		lower = lower->next;
		if (higher == lower)
		{
			lower = head;
			while (lower != higher)
			{
				lower = lower->next;
				higher = higher->next;
			}
			return (higher);
		}
	}

	return (NULL);
}

