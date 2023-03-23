#include "main.h"

/**
 * _memset - a function that fills memory
 * @s: the pointer to block of memory to fill
 * @b: inputs variable of char type
 * @n: unsigned int variable the bytes to be filled
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
