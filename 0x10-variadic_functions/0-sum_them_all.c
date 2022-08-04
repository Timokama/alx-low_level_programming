#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summ all
 * @n: given number
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
