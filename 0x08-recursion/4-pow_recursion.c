#include "main.h"

/**
 * _pow_recursion - to check the x raised to y
 * @x: base number
 * @y: exponent number
 * Return: value of the equation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
