#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: arrays in argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int me;

	for (me = 0; me < argc; me++)
		printf("%s\n", argv[me]);
	return (0);
}
