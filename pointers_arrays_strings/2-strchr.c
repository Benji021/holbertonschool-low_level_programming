#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - that locates a character in a string
 * @s: in the string
 * @c:  pointer to the first occurrence of the characte
 * Return: Always 0
*/
char *_strchr(char *s, char c)
{
	int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
