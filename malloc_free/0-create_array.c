#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @c: specific character
 * @size: matrix size
 * Return : 0 or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(int) * size);

	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
