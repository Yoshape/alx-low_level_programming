#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input value
 * Return: -1 if n is lower than 0 to indicate error,
 * else return n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n = n * factorial(n - 1));
}
