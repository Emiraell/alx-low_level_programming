#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int me;

	for (me = 1; me <= 100; me++)
	{
		if (me % 3 == 0 && me % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (me % 5 == 0 && me % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (me % 3 == 0 && me % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (me == 1)
		{
			printf("%d", me);
		}
		else
		{
			printf(" %d", me);
		}
	}
	printf("\n");
	return (0);
}
