#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_bit - that sets the value of a bit to 1 at a given index
 * @n : decimal number passed by pointer
 * @index : index position to change, starting from 0
 *
 * Return: 1 if it worked or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		*n += i;

	return (1);
}
