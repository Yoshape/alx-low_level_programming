#include "main.h"
#include <stdio.h>

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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = _atoi(argv[i]);
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
