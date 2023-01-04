#include "main.h"

/**
 * emirael - check the square root
 * @n: number to check
 * @c: number to iterate
 * Return: the square root or -1.
 */

int emirael(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + emirael(n, c + 1));
}


/**
 * _sqrt_recursion - Check the square root
 * @n: number to check
 * Return: the square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (emirael(n, 2));
}
