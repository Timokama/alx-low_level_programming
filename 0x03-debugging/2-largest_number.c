#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: lagest number
 */
int lagest_number(int a,int b, int c)
{
	int largest;

	if(a >=b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;
	
	largest = lagest_number(a, b, c);

	printf("%d is the lagest number \n",largest);
	
	return (0);
}
