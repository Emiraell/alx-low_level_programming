#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: command line arguements
 * @argv: arrays on command line arguement
 * Return: always 0.
 */

int main(int argc, int *argv[])
{
	int h, k, add = 0;

	for (h = 1; h < argc; h++)
	{
		for (k = 0; argv[h][k] != '\0'; k++)
		{
			if (!isdigit(argv[h][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[h]);
	}
	printf("%d\n", add);
	return (0);
}
