#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - prints all the args content
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int j;

	if (ac <= 0)
		return (NULL);

	if (av == NULL)
	{
		free(av);
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		printf("%s\n", av[j]);
		(*av)++;
	}
	av = '\0';
	return (*(av + j));
}
