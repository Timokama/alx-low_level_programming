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
	int j, str = 0, i, t = 0;
	char *avr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			str++;
	avr = malloc((str + ac + 1) * sizeof(char));
	if (avr == NULL)
	{
		free(avr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			avr[t] = av[i][j];
			t++;
		}
		avr[t] = '\n';
		t++;
	}
	av[t] = '\0';
	return (avr);
}
