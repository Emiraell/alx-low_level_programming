#include "main.h"

/**
 * flip_bits - Count bits to flip in navigating numbers
 * @n: number
 * @m: number to flip n to
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int di, bits = 0;

	di = n ^ m;
	while (di > 0)
	{
		bits += (di & 1);
		di >>= 1;
	}
	return (bits);
}
