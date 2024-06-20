#include "main.h"
/**
 * _isalpha - lettre
 * @c : The character to be che
 * Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
