#include <stdio.h>
#include "main.h"

/**
 * covert_str - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int covert_str(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: input value
 * @argv: input value
 * Return: 0 on succes, else 1
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int mul = 1;
	int j = argc - 1;

	if (j > 1)
	{
		for (i = 1; i < j; i++)
		{
			num = covert_str(argv[i]);
			mul = mul * num;
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
