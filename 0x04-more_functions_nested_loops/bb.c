#include<stdio.h>
int main(void)
{
	int n = 9;
	int x;

	if (n <= 0)
	{
		printf("\n");
	}
	else 
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		printf("\n");
	}
}
