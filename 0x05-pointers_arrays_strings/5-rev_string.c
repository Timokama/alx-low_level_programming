#include "main.h"
#include <string.h>
#include<stdio.h>
/**
 * rev_string - Reverse a string
 * *@s: the string
 * 
 * Return: void
 */
void rev_string(char *s)
{
	int i, c;
	int alx;

	c = strlen(s);

	for (i = 0 ; i < c / 2; i++)
	{
		alx = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = alx;
	}
}
