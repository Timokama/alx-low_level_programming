#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 *
 * Description: prints the numbers excluding 2 and 4
 *
 * Return: The numbers since 0 to 9
 */
void print_most_numbers(void)
{
	int i = 0;
	for (; i <= 9; i++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar(x + '0');
}
