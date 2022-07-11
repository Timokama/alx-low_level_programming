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
	int i, j = 0;
	char *s2[100];

	for (i = strlen(*s) - 1; i >= 0; i--)
	{
		*s2[j] = *s[i];
		j++;
	}
	*s2[j] = '\0';
	_putchar(*s2);
	_putchar('\n');
}
