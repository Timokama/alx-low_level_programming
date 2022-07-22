#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the min number of coins per given amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success 1 fail
 */
int main(int argc, char *argv[])
{
	int coins = 0, i, amount;
	int value[5] = { 25, 10, 5, 2, 1};

	amount = atoi(argv[argc -1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= amount)
			{
				coins += (amount / value[i]);
				amount -= (amount / value[i]) * value[i];
				if (amount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
