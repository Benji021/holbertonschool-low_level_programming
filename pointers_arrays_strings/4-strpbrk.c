#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - that searches a string for any of a set of bytes.
 * @s : function locates the first occurrence in the string
 * @accept :  any of the bytes in the string
 * Return : Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
