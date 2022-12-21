#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer's destination
 * @src: source
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int no, go;

	no = 0;
	while (dest[no])
		no++;
	for (go = 0; src[go]; go++)
		dest[no++] = src[go];
	return (dest);
}
