#include "main.h"

/**
 * _memset - fill memory with a constant
 * @s: memory area is fill
 * @b: constant byte to fill
 * @n: byte of memory arae filled
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
