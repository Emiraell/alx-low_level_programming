#include "main.h"

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: binary to convert
 * Return: unsigned int to main
 */

unsigned int binary_to_unit(const char *b)
{
	int night = 0, l;
	unsigned int number = 0, nbina = 0;

	if (b == NULL)
		return (nbina);

	while (b[night] != '\0')
		night++;
	night -= 1;
	l = 0;
	while (b[l])
	{
		if ((b[l] != '0') && (b[l] != '1'))
			return (nbina);
		if (b[l] == '1')
			number += (1 * (1 << night));
		l++;
		night--;
	}
	return (number);
}
