#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural squre root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
/**
 * _sqrt - check for the squre root of c
 * @n: square root
 * @i: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int _sqrt(int n, int i)
{
	if (n * n == i)
		return (i);
	if (n * n > i)
		return (-1);
	return (_sqrt(n + 1, i));
}
