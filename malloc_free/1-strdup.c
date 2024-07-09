#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : charactere pointer
 * Return: pointer to the copied string (Success), NULL (Error)
*/
char *_strdup(char *str)
{
		char *a;
	unsigned int i, c;

	i = 0;
	c = 0;

	if (str == NULL)
		return (NULL);

	while (str[c])
		c++;

	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);

	while ((a[i] = str[i]) != '\0')
		i++;

	return (a);
}
