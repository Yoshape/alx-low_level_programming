#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{ putchar(c);
	}
	putchar('\n');
	return (0);
}
