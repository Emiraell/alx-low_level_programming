#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * compare - compares each character of string
 * @s: string to check
 * @no: smallest iterative number
 * @nu: biggest iteraable number
 * Return: string
 */

int compare(char *s, int no, int nu)
{
	if (*(s + no) == *(s + nu))
	{
		if (no == nu || no == nu + 1)
			return (1);
		return (0 + compare(s, no + 1, nu - 2));
	}
	return (0);
}


/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
