#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: The first string
 * @s2: The second string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0, n = 0, o = 0, p = 0,k;

	while (s1[m])
	{
		m++;
	}
	while (s2[n])
	{
		n++;
	}
	if (m < n)
	{
		k = m;
	}
	else
	{
		k = n;
	}
	while (o <= k)
	{
		if (s1[o] == s2[o])
		{
			o++;
			continue;
		}
		else
		{
			p = s1[o] - s2[o];
			break;
		}
		o++;
	}
	return (p);
}
