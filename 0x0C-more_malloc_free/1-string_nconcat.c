#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings, the size of 2nd string is defined.
 * @s1: string 1.
 * @s2: string 2, concatenated to 1
 * @n: size of s2 concatenated string.
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i, nsize;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n >= size2)
		nsize = size2;
	else
		nsize = n;
	conStr = malloc((size1 + nsize + 1) * sizeof(char));
	if (conStr == NULL)
		return(NULL);
	for (i = 0; i < size1; i++)
		conStr[i] = s1[i];
	for (i = size1; i < (size1 + nsize); i++)
		conStr[i] = s2[i - size1];
	conStr[i] = '\0';
	return (conStr);
}
