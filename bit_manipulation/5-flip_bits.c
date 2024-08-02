#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * flip_bits - that returns the number of bits you would need to flip
 * to get from one number to another
 * @n : number of the bits
 * @m : second number of the bits
 *
 * Return: number of the bits that needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int sec;

	i = n ^ m;
	sec = 0;

	while (i)
	{
		sec++;
		i &= (i - 1);
	}

	return (sec);
}
