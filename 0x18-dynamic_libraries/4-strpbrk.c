#include "main.h"

/**
 * _strpbrk - a function that searches for a string
 * @s: pointer to input string
 * @accept: pointer to string in @s
 * Return: pointer to the byte in @s
 */

char *_strpbrk(char *s, char *accept)
{
	int leo, messi;

	leo = 0;
	while (s[leo] != '\0')
	{
		messi = 0;
		while (accept[messi] != '\0')
		{
			if (s[leo] == accept[messi])
				return (s + leo);
			messi++;
		}
		leo++;
	}
	return ('\0');
}
