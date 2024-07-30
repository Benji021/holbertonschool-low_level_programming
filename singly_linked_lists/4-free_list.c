#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - that frees a list_t list
 * @head : pointer to head
 *
 * Return: void
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
