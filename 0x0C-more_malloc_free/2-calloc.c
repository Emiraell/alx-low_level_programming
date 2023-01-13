#include "main.h"
#include <stdlib.h>

/**
 * mem - fills memory with byte
 * @s:input pointer
 * @b: character to fill
 * @n: number of byte
 * Return: A pointer
 */

char *mem(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}


/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer on succes or NULL on error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p

		if (nmemb == 0 || size == 0)
			return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	mem(p, 0, nmemb * size);
	return (p);
}
