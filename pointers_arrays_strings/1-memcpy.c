#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - that copies memory area.
 * @dest : memory area
 * @src: from memory area
 * @n: function copies
 * Return: Always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (0);
}
