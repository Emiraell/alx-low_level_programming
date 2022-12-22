#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
	int p, h = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[h] != '\0')
	{
		for (p = 0; p < 5; p++)
		{
			if (s[h] == sl[p] || s[h] == ul[p])
			{
				s[h] = n[p];
				break;
			}
		}
		h++;
	}
	return (s);
}
