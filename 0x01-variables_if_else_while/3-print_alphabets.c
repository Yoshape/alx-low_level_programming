#include <stdio.h>

/**
 * main - prints alphabets in lower case, and in upper case
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{ putchar(c);
	}
	for (c = 'A'; c <= 'z'; c++)
	{ putchar(c);
	}
	putchar('\n');
	return (0);
}
