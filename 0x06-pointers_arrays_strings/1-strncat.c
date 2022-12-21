#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer's destination
 * @src: pointer's source
 * @n: numbers of byte
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int og, om;

	og = 0;
	while (dest[og])
		og++;
	for (om = 0; om < n && src[om] != '\0'; om++)
		dest[og + om] = src[om];
	dest[og + om] = '\0';
	return (dest);
}
