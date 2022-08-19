#include "main.h"
/**
 * flip_bits - return the difference about digits between 2 numbers.
 * @n: the input number1
 * @m:input number2
 * Return: the differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, mask = 0;
	int i = 63, digit;
	unsigned int differences = 0;

	bit_diff = n ^ m;
	while (i >= 0)
	{
		mask = 1 << i;
		digit = (bit_diff & mask) >> i;
		if (digit == 1)
			differences++;
		i--;
	}
	return (differences);
}
