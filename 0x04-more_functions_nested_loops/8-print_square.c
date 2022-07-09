#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 *
 * Return: empty
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{ 
				for (y = 0; y < size; y++)
				{
				_putchar('#');
			}
			if (x == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
