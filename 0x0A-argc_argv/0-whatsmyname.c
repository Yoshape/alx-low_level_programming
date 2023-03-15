#include "main.h"
#include <stdio.h>

/**
 * main -  prints its name, followed by a new line
 * @argc: inpute value
 * @argv: inpute value
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
