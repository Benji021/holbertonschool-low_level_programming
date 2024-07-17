#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * int_index - that searches for an integer.
 * @array : the array array
 * @size : is the number of elements in the array array
 * @cmp : is a pointer to the function to be used to compare values
 * Return: 0 or -1 if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
