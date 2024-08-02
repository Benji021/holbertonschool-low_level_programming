#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - that returns the value of a bit at a given index
 * @n : valus on bit
 * @index : is the index
 *
 * Return: value of the bit or -1 an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	val = n >> index;

	return (val & 1);
}
