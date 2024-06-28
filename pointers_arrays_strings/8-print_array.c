#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a : int type array pointer
 * @b : int type integer
 * Return: void
*/
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
