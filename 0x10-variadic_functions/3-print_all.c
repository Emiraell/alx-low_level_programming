#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: arguements passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int i = 0, j, c = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(va, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(va, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(va, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(va, double)), c = 1;
				break;
			case 's':
				s = va_arg(va, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(va);
}
