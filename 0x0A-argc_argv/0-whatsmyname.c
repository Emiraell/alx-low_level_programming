#include "main.h"

/**
 * myname - To printits name
 * @argc: number of command line
 * @argv: arrays contain in command line arguement
 * Return: 0n succes return 0
 */

int myname(int argc __attribute__((unused)), char *argv[])
{
	_putchar("%s\n", argv[0]);
	return (0);
}
