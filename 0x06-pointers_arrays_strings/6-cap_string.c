#include "main.h"
#include <stdio.h>

/**
 * cap_string - prototype
 * @p: string 
 * Return: char value
 */
char *cap_string(char *p)
{
	int a = 0, i;
	int  c = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (p[a])
	{
		i = 0;

		while (i < c)
		{
			if ((a == 0|| p[a - 1] == spc[i]) && (p[a] >= 97 && p[a] <= 122))
				p[a] -= 32;
			i++;
		}
		a++;
	}
	return (p);
}
