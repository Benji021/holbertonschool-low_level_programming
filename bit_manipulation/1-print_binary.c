#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - that prints the binary representation of a number
 * @n : number binary
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
