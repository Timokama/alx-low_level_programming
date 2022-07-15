#include "main.h"
#include <stdio.h>
/**
  *_strcat - concatenate two strings
  * @dest: The destination string
  * @scr: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int alx, a;
	
	alx = a = 0;
	while (*(dest + alx))
	{
		alx++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[alx] = src[a];
		alx++;
	}
	dest[alx] = '\0';
	return (dest);
}
