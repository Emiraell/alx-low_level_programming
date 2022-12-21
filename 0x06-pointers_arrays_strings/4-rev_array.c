#include "main.h"

/**
 * reverse_array - function that reverses the content
 *
 * @a: pointer to int array
 * @n: number to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, w, t;

	w = 0;
	t = n - 1;
	while (w < t)
	{
		temp = a[w];
		a[w] = a[t];
		a[t] = temp;
		w++;
		t--;
	}
}
