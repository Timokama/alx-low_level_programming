#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, j = 0;

	while (dest[a])
	{
		a++;
	}
	while (j < n && src[j])
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a + n + 1] = '\0';
	return(dest);
}
