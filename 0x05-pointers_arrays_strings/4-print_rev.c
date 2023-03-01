#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
