#include <stdio.h>

/**
 * main - prints the number of arguement
 * @argc: number ofcommand line arguement
 * @argv: arrays in the command line
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
