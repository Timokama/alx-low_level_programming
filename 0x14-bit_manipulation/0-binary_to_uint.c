#include "main.h"
/**
 * binary_to_uint - translate number to unsigned int.
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '1')
			num = (num << 1) | 1;
		else if (*(b + i) == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
