#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - that returns the length of a string
 * @s : the string to count
 * Return : ength of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
