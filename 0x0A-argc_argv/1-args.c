#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments passed to it
 * @argc: input value
 * @argv: input value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	UNUSED(argv);

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}

