#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it
 * @argc: input value
 * @argv: input value
 * Return: 0 Always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
