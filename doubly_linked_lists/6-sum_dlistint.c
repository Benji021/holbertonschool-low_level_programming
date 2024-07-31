#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head : pointer to head
 *
 * Return: sum of all data in the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
