#include "main.h"
#include <stdio.h>

/**
 * main - prints all the ars content
 * @argc: argument count or size of argument
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
		(*argv)++;	
	}
	return (0);
}
