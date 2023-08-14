#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: inpute value
 * Return: -1 if n is less than 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt(n, 0));
	}
}

/**
 * natural_sqrt - calculates the actual natural square root
 * @n: value to find the square root
 * @i: factors that determine the square root
 * Return: the square root
 */

int natural_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt(n, i + 1));
	}
}
