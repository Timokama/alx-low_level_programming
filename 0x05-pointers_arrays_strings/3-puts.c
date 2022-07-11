#include "main.h"

/**
 * _puts(char *str);
 * @str: The string to be treated
 *
 * Return: void
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

