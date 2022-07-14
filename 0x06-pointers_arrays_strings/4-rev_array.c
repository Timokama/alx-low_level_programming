#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integres
 * @a: An array of integers
 * @n: number of element to swap
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, l,k;

	p = a;

	for (i =1 ; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		l = a[k];
		a[k] = *p;
		*p = l;
		p--;
	}
	l = '\0';
}
