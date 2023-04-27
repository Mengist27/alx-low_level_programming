#include "lists.h"
#include <stdlib.h>

/** free_list - free the list
 * @head: Head of the linked lists
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
