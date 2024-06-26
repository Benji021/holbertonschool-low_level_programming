#include "main.h"
#include <stdio.h>
#include<string.h>
/**
 * _strcat - concatenates two strings.
 * @dest : pointer to the destination string
 * @src : pointer to source string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
		int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
