#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x, y;

	x = y = 0;
	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			haystack += x;
			return (haystack);
		}
		x++;
	}
	return (0);
}

