#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * clear_bit - that sets the value of a bit to 0 at a given index
 * @n : decimal number pointer
 * @index : is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked or -1 if it error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int val;

	if (index > 64)
		return (-1);

	val = index;
	for (i = 1; val > 0; i *= 2, val--)

		if ((*n >> index) & 1)
			*n -= i;

	return (1);
}
