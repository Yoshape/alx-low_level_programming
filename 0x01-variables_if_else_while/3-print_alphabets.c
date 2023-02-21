#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alph[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 53; i++)
	{ putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
