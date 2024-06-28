#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
