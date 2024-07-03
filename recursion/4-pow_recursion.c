#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - that returns the value of x raised to the power of y
 * @x : returns the value
 * @y : raised to the power
 * Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y <= 0)
		return (1);

	else
		return (_pow_recursion(x, y - 1) * x);
}
