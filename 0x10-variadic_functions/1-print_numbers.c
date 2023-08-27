#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pri_num;
	int x;

	va_start(pri_num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(pri_num, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(pri_num);
	printf("\n");
}

