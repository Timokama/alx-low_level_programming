#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memoryarea
 * @n: bytes from memory area to copy
 *
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = scr[j];
	}
	return (dest);
}
