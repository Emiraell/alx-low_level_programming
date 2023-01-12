#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: strings to duplicate
 * Return: Pointer on succes and NULL on error
 */
char *_strdup(char *str)
{
	char *du, unsigned int y, lent;

	y = 0;
	lent = 0;

	if (str == NULL)
		return (NULL);
	while (str[lent])
		lent++;

	du = malloc(sizeof(char) * (lent + 1));
	if (du == NULL)
		return (NULL);
	while ((du[y] = str[y]) != '\0')
		y++;
	return (du);
}
