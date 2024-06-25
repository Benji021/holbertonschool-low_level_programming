#include "main.h"
#include <stdio.h>
/**
 * swap_int - the values of two integers.
 * a@ : first integers
 * b@ : second integers
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
