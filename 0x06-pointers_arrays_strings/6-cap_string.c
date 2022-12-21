#include "main.h"

/**
 * cap_string - function that capitalizes all words
 *
 * @s: pointer to char input array
 *
 * Return: @s
 */

char *cap_string(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 97 && s[k] <= 122)
		{
			if (k == 0)
			{
				s[k] -= 32;
			}
			if (s[k - 1] == 32 || s[k - 1] == 9 || s[k - 1] == 10 ||
			s[k - 1] == 44 || s[k - 1] == 59 || s[k - 1] == 46 ||
			s[k - 1] == 33 || s[k - 1] == 63 || s[k - 1] == 34 ||
			s[k - 1] == 40 || s[k - 1] == 41 || s[k - 1] == 123 ||
			s[k - 1] == 124)
			{
				s[k] -= 32;
			}
		}
		k++;
	}
	return (s);
}
