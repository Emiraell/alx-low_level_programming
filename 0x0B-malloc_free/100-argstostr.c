#include "main.h"

/**
 * argstostr - Concatenates all the arguements
 * @ac: arguement counter
 * @av: arguement holder
 * Return: A pointer to a new string or NULL on error
 */

char *argstostr(int ac, char **av)
{
	int lent, al, all, alll;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (al = 0; al < ac; al++)
	{
		for (all = 0; av[al][all] != '\0'; all++)
			lent++;
		lent++;
	}
	str = malloc((lent + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	alll = 0;
	for (al = 0; al < ac; al++)
	{
		for (all = 0; av[al][all] != '\0'; all++)
		{
			str[alll] = av[al][all];
			alll++;
		}
		str[alll] = '\n';
		alll++;
	}
	str[alll] = '\0';
	return (str);
}
