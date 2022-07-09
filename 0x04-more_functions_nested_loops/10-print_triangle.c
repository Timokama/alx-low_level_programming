#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 *
 * Return: empty
 */
void print_triangle(int size)
{
	int x, y, z;
	
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
