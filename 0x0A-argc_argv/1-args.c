#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: input value
 * @argv: input value
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;
	
	printf("%d\n", i);
	return (0);
}
