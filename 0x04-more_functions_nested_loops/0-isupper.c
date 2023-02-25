#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: the character
 * Return: 1 if c is upper case, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
