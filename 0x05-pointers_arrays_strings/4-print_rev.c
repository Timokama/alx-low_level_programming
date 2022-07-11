#include "main.h"

/**
 * print_rev - prints a reverse of a string
 * @s: 
 *
 * Return: reverse
 */
void print_rev(char *s)
{
	int i, j = 0;
	char s2[100];

	for (i = strlen(*s) - 1; i >= 0; i--)
	{
		s2[i] = *s[i];
		j++;
	}
	s2[j] = '\0';
	_putchar(s[i]);
	_putchar('\n');
}
