#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of string 1 and string 2
 * Return: new string followed by first bytes of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int 11, 12, p, o;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	11 = 12 = 0;
	while (s1[11] != '\0')
		11++;
	while (s2[12] != '\0')
		12++;

	if (n >= 12)
		n = 12;

	str = (char *) malloc((11 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (p = 0; s1[p] != '\0'; p++)
		str[p] = s1[p];

	for (o = 0; o < n && s2[o] != '\0'; o++)
	{
		str[p] = s2[o];
		p++;
	}
	str[p] = '\0';
	return (str);
}