#include "lists.h"
#include <stdlib.h>

/** free_list - free the list
 * @head: Head of the linked lists
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

