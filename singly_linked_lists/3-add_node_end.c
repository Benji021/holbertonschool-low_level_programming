#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - that adds a new node at the end of a list_t list
 * @head : double pointer to head
 * @str : string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
