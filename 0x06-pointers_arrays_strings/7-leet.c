#include "main.h"

/**
 * leet - Encode a string into 1337
 * @p: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *p)
{
	int a = 0, b = 0, j = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (p[a])
	{
		b = 0;

		while (b < j)
		{
			if (p[a] == r[b] || p[a] - 32 == r[b])
			{
				p[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (p);
}
