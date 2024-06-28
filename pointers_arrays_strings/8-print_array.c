#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a : int type array pointer
 * @b : int type integer
 * Return: void
*/
void print_array(int*a, int b)
{
	int i;

	i = 0;
	for (b--; b >= 0; b--)

	       i++;
	{
		printf("%d", a[i]);
		printf(", ");
	}

	printf("\n");
}
