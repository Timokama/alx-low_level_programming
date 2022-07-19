#include "main.h"

int checker(int n, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
/**
 * checker - check if a number is prime
 * @n: the numberto be checked
 * @i: possible number of times
 *
 * Return: 1 if prime, 0 if not
 */
int checker(int i, int n)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (checker(i + 1, n));
}
