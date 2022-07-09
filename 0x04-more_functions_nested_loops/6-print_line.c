#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 * 
 * Return: empty
 */
void print_line(int n)
{
	int x = n;
	for (x = n; n > 0 ; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
