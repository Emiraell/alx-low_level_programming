#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter, otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
