#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
		exit(98);
	return (memo);
}
