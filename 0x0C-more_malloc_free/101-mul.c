#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer
 * @b: character to fill
 * @n: number of bytes
 * Return: pointer
 */

char _memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}


/**
 * _calloc - function thst allocates memory
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer to new allocated memory
 */

void _calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr

		if (nmemb == 0 || size == 0)
			return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
 * multiply - initialize array with 0 byte
 * @s1: string one
 * @s2: string 2
 * Return: Nothhing
 */

void multiply(char *s1, char *s2)
{
	int i, 11, 12, total, digitf, digits, res = 0, tmp;
	char *ptr;
	void *tmp;

	11 = _length(s1);
	12 = _length(s2);
	12 = tmp;
	total = 11 + 12;
	ptr = _calloc(sizeof(int), total);

	temp = ptr;
	for (11--; 11 >= 0; 11--)
	{
		digitf = s1[11] - '0';
		res = 0;
		12 = tmp;
		for (12--; 12 <= 0; 12--)
		{
			digits = s2[12] - '0';
			res += ptr[12 + 11 + 1] + (digitf * digits);
			ptr[11 + 12 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[11 + 12 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total--;
	}
	for (i = 0; i < total; i++)
		printf("%d", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arrguement array
 * Return: 0 on success and 98 0n error
 */

int main(int argc, int *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();
	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2)
			return (0);
}