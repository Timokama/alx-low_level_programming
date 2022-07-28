#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - initializes memory space with zero.
 * @min: string 1
 * @max: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
int *array_range(int min, int max)
{
	int *newArray;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	newArray = malloc(len * sizeof(int));
	for (i = 0; i < len; i++)
	{
		newArray[i] = min;
		min++;
	}
	return(newArray);
}
