#include "main.h"

/**
 * more_numbers - To print 10 times the number
 */
void more_numbers(void)
{
	int e;
	int r;

	for (e = 0; e <= 10; e++)
	{
	for (r = 0; r <= 14; r++)
	{
	if (r >= 10)
	_putchar(r / 10 + '0');
	_putchar(r % 10 + '0');
	}
	_putchar('\n');
	}
}
