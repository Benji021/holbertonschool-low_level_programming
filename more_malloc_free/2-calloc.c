#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb : number of elements
 * @size : size of each element
 * Return : void or NULL if nmemeb or size  is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			c[i] = 0;
		return (c);
	}
	else
		return (NULL);
}
