#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int idon;
	long int max;
	long int gesti;

	idon = 612852475143;
	max = -1;
	while (idon % 2 == 0)
	{
		max = 2;
		idon /= 2;
	}
	for (gesti = 3; gesti <= sqrt(idon); gesti = gesti + 2)
	{
		while (idon % gesti == 0)
		{
			max = gesti;
			idon = idon / gesti;
		}
	}
	if (idon > 2)
		max = idon;
	printf("%ld\n", max);
	return (0);
}
