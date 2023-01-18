#include "calc"
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: input 1
 * @b: input 2
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: input 1
 * @b: input 2
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: input 1
 * @b: input 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: input 1
 * @b: input 2
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Get the remainder of a divided by b
 * @a: input 1
 * @b: input 2
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
