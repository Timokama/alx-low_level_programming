#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}
	if (length_of_string % 2 == 1)
	{
		n = (length_of_string - 1) / 2;
		n += 1;
	}
	else
	{
		n = length_of_string / 2;
	}
	for (; n < length_of_string; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
