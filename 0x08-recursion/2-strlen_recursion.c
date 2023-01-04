#include "main.h"

/**
 * _strlen_recursion - to check the lenth of string
 * @s: string to chjeck
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return(1 + _strlen_recursion(s + 1));
}
