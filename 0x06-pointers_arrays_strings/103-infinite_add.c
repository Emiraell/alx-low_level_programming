#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: result location
 * @size_r: buffer size
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, po, gb, rd1, rd2, add = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a++;
	if (a1 >= a2)
		gb = a1;
	else
		gb = a2;
	if (size_r <= gb + 1)
		return (0);
	r[gb + 1] = '\0';
	a1--, a2--, size_r--;
	rd1 = *(n1 + a1) - 48, rd2 = *(n2 + a2) - 48;
	while (gb >= 0)
	{
		po = rd1 + rd2 + add;
		if (po >= 10)
			add = po / 10;
		else
			add = 0;
		if (po > 0)
			*(r + gb) = (po % 10) + 48;
		else
			*(r + gb) = '0';
		if (a1 > 0)
			a1--, rd1 = *(n1 + a1) - 48;
		else
			rd1 = 0;
		if (a2 > 0)
			a2--, rd2 = *(n2 + a2) - 48;
		else
			rd2 = 0;
		gb--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
