#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints its name followed by a new line
 * @argc: number of arguments
 * @argv: holds the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(int)(argc);

	printf("%s\n", argv[0]);
	return (0);
}
