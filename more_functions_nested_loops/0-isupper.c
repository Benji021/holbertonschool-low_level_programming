#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * main - isupper
 * @c : character to check
 * Return: 0 or 1
*/
int _isupper(int c)
{
	int ch = 'C';
		if (isupper(ch))
		{
			printf("ch = |%c| is uppercase character\n", ch);
		}
		else
		{
			printf("ch = |%c| is not uppercase character\n", ch);
		}
	return (0);
}
