#include "main.h"

/**
 * prime - check for prime number
 * @n: number to check
 * @c: iterative number
 * Return: 1 if n is prime otherwise 0
 */

int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: number to check
 * Return: 1 if n is a prime number otherwise 0.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
