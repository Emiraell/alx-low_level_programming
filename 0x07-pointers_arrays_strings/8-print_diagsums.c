#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonal
 * @a: input pointer
 * @size: size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, si1, si2;

	si1 = 0;
	si2 = 0;
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			si1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			si2 += a[i];
	}
	print("%d, %d\n", si1, si2);
}
