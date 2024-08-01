#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b : pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int len;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, sum = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			sum += pow;
	}

	return (sum);
}
