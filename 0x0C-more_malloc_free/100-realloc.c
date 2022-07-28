#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - change the memeory space of an array.
 * @ptr: pointer to ald array.
 * @old_size: size of the ptr
 * @new_size: new size of array
 * Return: pointer to the new array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *reallocated, *ptrCast;

	ptrCast = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocated = malloc(new_size);
	if (reallocated == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		reallocated[i] = ptrCast[i];
	free(ptr);
	return (reallocated);
}
