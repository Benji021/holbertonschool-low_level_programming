#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s : bytes of the memory area pointed
 * @b : the constant byte
 * @n : function fills the first
 * Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
