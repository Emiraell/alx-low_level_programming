#include "main.h"

/**
 * print_square - printing of square
 * @size: size of the square
 */
void print_square(int size)
{
	int d, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (d = 0; d < size; d++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
