#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse a string
 * *@s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, j = 1;
	char *a, alx;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (; j < c; j++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i--)
	{
		alx = s[i];
		s[i] = *a;
		*a = alx;
		a--;
	}
}
