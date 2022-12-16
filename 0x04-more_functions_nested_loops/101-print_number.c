#include "main.h"

/**
 * print_number - To print an integer
 * @n: The integer to be considered
 */
void print_number(int n)
{
	unsigned int rael;

	if (n < 0)
	{
		rael = -n;
		_putchar(',');
	}
	else
	{
		rael = n;
	}
	if (rael / 10)
	{
		print_number(rael / 10);
	}
	_putchar((rael % 10) + '0');
}
