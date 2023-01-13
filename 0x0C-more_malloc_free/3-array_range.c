#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer
 * @min: min number of elemnt
 * @max: max number of element
 * Return: array pointer address and  NULL on error
 */

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
