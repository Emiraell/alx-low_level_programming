#include "main.h"

/**
 * print_numbers - To print number from 0 to 9
 */
void print_numbers(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
		_putchar(q + '0');
	}
	_putchar('\n');
}
