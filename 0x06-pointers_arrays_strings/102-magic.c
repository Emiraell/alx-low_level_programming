#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int y;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &y;

		p[5] = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
