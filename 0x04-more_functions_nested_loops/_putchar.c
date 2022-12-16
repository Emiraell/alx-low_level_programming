#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to prin t
 *
 * Return: On success 1.
 * on error, -1 is returned and errnois set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
