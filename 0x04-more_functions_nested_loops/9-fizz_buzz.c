#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int do;

	for (do = 1; do <= 100; do++)
	{
		if (do % 3 == 0 && do % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (do % 5 == 0 && do % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (do % 3 == 0 && do % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (do == 1)
		{
			printf("%d", do);
		}
		else
		{
			printf("%d", do);
		}
	}
	printf("\n");
	return (0);
}
