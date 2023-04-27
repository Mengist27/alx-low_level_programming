#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds the new nodes at the beginning of the list
 * @head: The orginal linked lists
 * @str: The strings to be added to the nodes
 * Return: The address of the new list if success, NULL if its failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int s = 0;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	while (str[s])
		s++;

	list->len = s;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (list);
}
