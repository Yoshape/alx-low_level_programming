#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list pri_str;

	va_start(pri_str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(pri_str, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(pri_str);
	printf("\n");
}
