#include "main.h"

/**
  *_strcat - concatenate two strings
  * @dest: The destination string
  * @scr: The source string
  * 
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int alx = 0, a = 0;
	
	while (*(dest + alx))
	{
		alx++;
	}
	while (*(dest + alx) = *(src + a))
	{
		alx++;
		a++;
	}
	dest[alx] = '\0';
	return (dest);
}
