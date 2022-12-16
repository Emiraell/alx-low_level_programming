#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size to check
 */
void print_triangle(int size)
{
	int o, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 1; o <= size; o++)
		{
			for (p = o; p < size; p++)
			{
				_putchar(' ');
			}
			for (p = 1; p <= o; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
