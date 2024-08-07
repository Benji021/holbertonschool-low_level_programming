#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_iterator - that executes a function given as a parameter
 * on each element of an array
 * @array : élément of an array
 * @size : is the size of the array
 * @action : is a pointer to the function you need to use
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
