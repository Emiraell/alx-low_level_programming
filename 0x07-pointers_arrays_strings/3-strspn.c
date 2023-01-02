#include "main.h"

/**
 * _strspn - a function that gets the length of substring
 * @s: pointer to string input
 * @accept: substring prefix to check
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int me, you, them;

	me = 0;
	while (s[me] != '\0')
	{
		you = 0;
		them = 1;
		while (accept[you] != '\0')
		{
			if (s[me] == accept[you])
			{
				them = 0;
				break;
			}
			you++;
		}
		if (them == 1)
			break;
		me++;
	}
	return (me);
}
