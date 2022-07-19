#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural squre root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
/**
 * _sqrt - check for the squre root of c
 * @n: square root number
 * @i: number to find sqrt of
 *
 * Return: squre root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt == n)
		return (i);
	if (sqrt > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
