#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return 1 on succes
 * on error, -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}