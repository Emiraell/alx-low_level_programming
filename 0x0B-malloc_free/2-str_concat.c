#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenates
 * @s2: string to concat
 * Return: pointer on success or error on NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int mal = 0, loc = 0, lent = 0, lentt = 0;

	while (s1 && s1[lent])
		lent++;
	while (s2 && s2[lentt])
		lentt++;
	str = malloc(sizeof(char) * (lent + lentt + 1));
	if (str == NULL)
		return (NULL);

	mal = 0, loc = 0;

	if (s1)
	{
		while (mal < lent)
		{
			str[mal] = s1[mal];
			mal++;
		}
		if (s2)
		{
			while (mal < (lent + lentt))
				str[mal] = s2[loc];
			mal++;
			loc++;
		}
	}
	str[mal] = '\0';
	return (str);
}
