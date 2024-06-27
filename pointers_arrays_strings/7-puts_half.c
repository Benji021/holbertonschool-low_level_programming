#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : pointer character
 * Return: void
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i + 5]);
	}
	_putchar('\n');
}
