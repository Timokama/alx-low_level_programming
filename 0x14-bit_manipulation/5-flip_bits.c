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
	int i, digit;
	unsigned int differences = 0;

	bit_diff = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		mask = 1 << i;
		digit = (bit_diff & mask) >> i;
		if (digit == 1)
			differences++;
	}
	return (differences);
}
