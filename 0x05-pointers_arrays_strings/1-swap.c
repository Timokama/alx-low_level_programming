#include "main.h"

/**
 * swap_int - Swap the value of two integers
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
