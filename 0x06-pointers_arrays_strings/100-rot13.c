#include "main.h"

/**
 * root13 - ..
 * @p: ..
 * Return: ...
 */
char *rot13(char *p)
{
	int a = 0;
	
	while (p[a])
	{
		while ((p[a] >= 'a' && p[a] <= 'z') || (p[a] >= 'A' &&p[a] <= 'Z'))
		{
			if ((p[a] > 'm' && p[a] <= 'z') || (p[a] > 'M' && p[a] <= 'Z'))
			{
				p[a] -= 13;
				break;
			}
			p[a] += 13;
		}
		a++;
	}
	return (p);
}
