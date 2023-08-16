#include "main.h"

/**
 * _islower - prints checks for lower case character
 * @c: the character
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
