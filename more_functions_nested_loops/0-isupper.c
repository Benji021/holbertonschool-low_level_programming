#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isupper - c is uppercase
 * @c : character to check
 * Return: 0
*/
int _isupper(int c)
{
	int ch = 'C';
		if (isupper(ch))
		{
			printf("'%c' is uppercase character.", ch);
		}
		else
		{
			printf("'%c' is not uppercase character.", ch);
		}
	return (0);
}
