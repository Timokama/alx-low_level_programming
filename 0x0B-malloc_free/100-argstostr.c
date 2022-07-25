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
	char **avr;

	if (ac == 0)
		return (NULL);
	avr = malloc(ac * sizeof(char **));
	if (avr == NULL)
	{
		free(avr);
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		avr[j] = av[j];
		printf("%s\n", avr[j]);
	}
	return (av[j]);
}
