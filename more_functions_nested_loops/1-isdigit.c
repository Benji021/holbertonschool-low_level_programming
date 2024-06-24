#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c : character to check
 * Return: 1 is a digit or 0 else
*/
int _isdigit(int c)
{
	for (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
