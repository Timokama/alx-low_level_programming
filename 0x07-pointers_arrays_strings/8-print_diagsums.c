#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square matrix 
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;
	
	for (b = 0; b < size; b++)
	{
		sum1 += a[(size * b) + b];
		sum2 += a[(size * b) + (size - 1 - b)];
	}
	printf("%d, %d\n", sum1, sum2);
}
