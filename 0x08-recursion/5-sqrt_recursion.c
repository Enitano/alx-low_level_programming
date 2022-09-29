#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: 0 success else -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the natural square root of a number
 * @n: test number
 * @a: squared number
 * Return: the square root of n
 */

int _sqrt(int n, int a)
{
	if (n > a / 2)
	{
		return (-1);
	}
	else if (n * n == a)
	{
		return (n);
	}
	return (_sqrt(n + 1, a));
}
