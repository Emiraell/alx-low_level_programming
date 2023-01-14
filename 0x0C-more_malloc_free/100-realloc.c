#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer
 * @old_size: old memory
 * @new_size: new memory
 * Return: pointer to new memory or NULL on error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr == malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		free(ptr);
		return (new_ptr);
	}

	if (new-size == 0 && ptr != NULL)
	{
		free(ptr);
		return(new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	temp_ptr = ptr;

	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp_ptr[i];
	free(ptr);
	return (new_ptr);
}
