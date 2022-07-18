#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y])
			s += x;
			return (s);
	}
	return (0);
}
