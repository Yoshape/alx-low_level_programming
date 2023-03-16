#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: input value
 * @argv: input value
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
