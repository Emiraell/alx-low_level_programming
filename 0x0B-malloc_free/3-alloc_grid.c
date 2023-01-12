#include "main.h"

/**
 * **alloc_grid - craeates two dimensional arrays
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to the created matrix on success
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int wi, he;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (wi = 0; wi < height; wi++)
	{
		arr[wi] = (int *) malloc(sizeof(int) * width);
		if (arr[wi] == NULL)
		{
			free(arr);
			for (he = 0; he <= wi; he++)
				free(arr[he]);
			return (NULL);
		}
	}
	for (wi = 0; wi < height; wi++)
	{
		for (he = 0; he < width; he++)
		{
			arr[wi][he] = 0;
		}
	}
	return (arr);
}
