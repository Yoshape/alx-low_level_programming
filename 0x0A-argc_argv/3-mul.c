#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: input value
 * @argv: input value
 * Return: 1 if it doesnt receive 2 arguments
 */

int main(int argc, char *argv[])
{
	int i, multiple = 1;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		multiple = multiple * atoi(argv[i]);
	}
	printf("%d\n", multiple);
	}
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		return (0);
}

