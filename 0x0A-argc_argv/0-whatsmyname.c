#include <stdio.h>

/**
 * main - To print its name
 * @argc: number of command line
 * @argv: arrays contain in command line arguement
 * Return: On success  0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
