#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums -  that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a : 2d array of int types
 * @size : size of array (square)
 * Return : void
*/
void print_diagsums(int *a, int size)
{
	int i, l, r;

	l = r = 0;

	for (i = 0; i < (size * size); i += size + 1)

		l += a[i];

	for (i = size - 1; i < (size * size - 1); i += size - 1)

		r += a[i];

	printf(" %d, %d\n ", l, r);
}
