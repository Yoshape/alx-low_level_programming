#include "main.h"

/**
 * _isalpha - prints checks for lower case character
 * @c: the character
 * Return: 1 if c is lowercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
