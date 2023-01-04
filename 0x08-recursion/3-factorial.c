#include "main.h"

/**
 * factorial - to check for factorial
 * @n: factorial to return
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
