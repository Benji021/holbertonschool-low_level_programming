#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isupper - c is uppercase
 * @c : character to check
 * Return: 1 for uppercase letter or 0 for else
*/
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
	return (0);
}
