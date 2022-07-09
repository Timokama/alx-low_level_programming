#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long x;
	
	for (x = 1; x < number; x++)
	{
		if (number % x == 0)
		{
			number = number / x;
			x = 2;
		}
	}
	printf("%lu\n", number);
	return (0);
}
