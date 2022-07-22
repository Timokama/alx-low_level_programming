#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of the two arguments
 * @argc: argument count or size of arguments
 * @argv: argument vector
 *
 * Return: 1 if are less of 2 argument atherwise 0
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n",mult);
	}
	return (0);
}
