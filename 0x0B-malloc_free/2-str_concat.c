#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int s1size, s2size, i;
	char *constr;

	i = 0;
	s1size = 0;
	s2size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1size])
		s1size++;
	while (s2[s2size])
		s2size++;
	s2size++;

	constr = malloc((s1size + s2size) * sizeof(char));
	if (constr == NULL)
		return (NULL);
	for (i = 0; i < s1size; i++)
		constr[i] = s1[i];
	for (i = s1size; i < (s1size + s2size); i++)
		constr[i] = s2[i - s1size];
	return (constr);
}
