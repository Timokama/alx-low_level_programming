#include "main.h"
/**
 * flip_bits - return the difference about digits between 2 numbers.
 * @n: the input number1
 * @m:input number2
 * Return: the differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, mask = 1;
	unsigned int count = 0, i = 0;

	bit_diff = n ^ m;
	while ( i < (sizeof(unsigned long int) * 8))
	{
		if (mask == (bit_diff & mask))
			count++;
		mask <<= 1;
		i++;
	}
	return (count);
}
