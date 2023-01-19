#include "variadic_functions.h"

/**
 * print_strings - Prints a string
 * @separator: pointer to a constant separator
 * @n: start of input variable
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *st;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		st = va_arg(ap, char *);
		if (st)
			printf("%s", st);
		else
			printf("(nil)");
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
