#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: string parameter
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int d, b;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[d] == alp[b])
			{
				s[d] = alpha[b];
				break;
			}
		}
	}
	return (s);
}
