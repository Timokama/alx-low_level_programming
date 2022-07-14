#include "main.h"

/**
 * root13 - encode a string into rot13
 * @p: string to encode
 * Return: Address of p
 */
char *rot13(char *p)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(p + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(p + i))
			{
				*(p + i) = b[j];
				break;
			}
		}
	}
	return (p);
}
