#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input value
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
