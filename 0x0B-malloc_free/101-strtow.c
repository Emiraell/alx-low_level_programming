#include "main.h"

/**
 * count - counts the number of word in a string
 * @st: string to count
 * Return: number of words on success
 */

int count(char *st)
{
	int eva, e, f;

	eva = 0;
	f = 0;
	for (e = 0; st[e] != '\0'; e++)
	{
		if (st[e] == ' ')
			eva = 0;
		else if (eva == 0)
		{
			eva = 1;
			f++;
		}
	}
	return (f);
}


/**
 * **strtow - splits a string into words
 * @str: string to spilt
 * Return: pointer to an array on success else NULL n error
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, lent = 0, word, c = 0, start, end;

	while (*(str + lent))
		lent++;
	word = count(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a <= lent; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[b] = NULL;
	return (matrix);
}
