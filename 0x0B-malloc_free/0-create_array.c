#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array on success
 */

char *create_array(unsigned int size, char c)
{
	char *p; unsigned int q = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (q < size)
	{
		*(p + q) = c;
		q++;
	}
	*(p + q) = '\0';
	return (p);
}
