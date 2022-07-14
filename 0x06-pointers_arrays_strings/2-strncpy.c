#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;
	
	while (src[x])
	{
		x++;
	}
	while (y < n && src[y])
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
