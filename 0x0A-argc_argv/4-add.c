#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 * @argc: input value
 * @argv: input value
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
