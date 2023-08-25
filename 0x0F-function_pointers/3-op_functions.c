#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - return the sum of inputs
 * @b: input value
 * @a: input value
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = 0;
	int result;

	result = a + b;
	sum = sum + result;
	return (sum);
}

/**
 * op_sub - returns the difference between inputs
 * @a: input value
 * @b: input value
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub = 0;
	int result;

	result = a - b;
	sub = sub + result;
	return (sub);
}

/**
 * op_mul - returns the product of inputs
 * @a: input value
 * @b: input value
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul = 0;
	int result;

	result = a * b;
	mul = mul + result;
	return (mul);
}

/**
 * op_div - returns the result of the division of inputs
 * @a: input value
 * @b: input value
 * Return: div
 */
int op_div(int a, int b)
{
	int div = 0;
	int result;

	result = a / b;
	div = div + result;
	return (div);
}

/**
 * op_mod - returns the remainder of the division of inputs
 * @a: input value
 * @b: input value
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod = 0;
	int result;

	result = a % b;
	mod = mod + result;
	return (mod);
}
