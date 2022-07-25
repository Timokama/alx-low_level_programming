#include "main.h"
#include <stdio.h>
/**
 * argstostr - prints all the args content
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
	int j;

	for (j = 0; j < ac; j++)
	{
		printf("%s\n", av[j]);
		(*av)++;
	}
	return (av[j]);
}
