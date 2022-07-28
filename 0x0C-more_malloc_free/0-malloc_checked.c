#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of new memory array.
 *
 * Return: initialized string
 */
void *malloc_checked(unsigned int b)
{
	void *melloc;

	melloc = malloc(b);
	if (melloc == NULL)
		exit(98);
	return (melloc);
}
