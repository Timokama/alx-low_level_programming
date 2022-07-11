#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a reverse of a string
 * @s: The string to print
 *
 * Return: reverse
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
