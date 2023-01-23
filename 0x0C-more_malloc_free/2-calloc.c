#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with byte
 * @s:input pointer
 * @b: character to fill
 * @n: number of byte
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
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
	char *p;

		if (nmemb == 0 || size == 0)
			return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
