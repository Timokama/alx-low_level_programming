#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @n: The number of times to print diagonal lines
 *
 * Return: empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

			if (x == n - 1)
				continue;
		}
	}
	else
		_putchar('\n');
}
