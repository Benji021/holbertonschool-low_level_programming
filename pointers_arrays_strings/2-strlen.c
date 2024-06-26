#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s : character pointer
 * Return: When the loop ends
*/
int _strlen(char *s)
{
	int i;
	i = 0;

	for (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
