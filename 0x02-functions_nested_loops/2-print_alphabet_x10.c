#include "main.h"

/**
 * print_alphabet_x10 - To print 10 times in lowercase
 *
 */
void print_alphabet_x10(void)
{

int m;
char i;
for (m=1, m<=10, m++)
{
for (i='a', i<='z', i++)
_putchar(i);
}
_putchar('\n');
}
