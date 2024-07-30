#include "lists.h"
#include <stdio.h>

/**
 * list_len - Write a function that returns the number
 * of elements in a linked list_t list
 *@h : number to linked lis
 *Return : nomber of element in the list
*/

size_t list_len(const list_t *h)
{
	size_t s = 0;
	const list_t *current = h;

	while (current)
	{
		s++;
		current = current->next;
	}
	return (s);
}
