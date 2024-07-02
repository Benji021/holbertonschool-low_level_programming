#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - that locates a substring.
 * @haystack : in the string
 * @needle : finds the first occurrence of the substring
 * Return : Always 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a--;
			b--;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
