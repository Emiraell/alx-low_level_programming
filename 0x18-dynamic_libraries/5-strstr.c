#include "main.h"

/**
 * _strstr - To locate a substring
 * @haystack: input string to search for a substrings
 * @needle: substring to search
 * Return: A pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
