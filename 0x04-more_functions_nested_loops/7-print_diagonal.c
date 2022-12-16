#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the number of times it should be printed
 */
void print_diagonal(int n)
{
	int b, t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == 1)
					_putchar('\\');
				else if (t < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
