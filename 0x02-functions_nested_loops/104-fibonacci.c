#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long n, j = 1, k = 0;

	for (; i < 99; i++)
	{
		if (i <= 1)
			n = i;
		else
		{
			n = k + j;
			k = j;
			j = n;
		}
		printf(", %ld", n);
	}
	printf("\n");
	return (0);
}
