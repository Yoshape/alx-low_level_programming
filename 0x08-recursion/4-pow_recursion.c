#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: value to raise to a power
 * @y: power
 * Return: -1 if nis less than 0, else returns 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
