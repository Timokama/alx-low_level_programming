#include "main.h"
/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
{
	int i;

	i = _strlen(s) - 1;
	return (check(0, i, s));
}

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str +1));
}

/**
 * check -checks to see if a string is a palindrome
 * @l: left index
 * @r: right index
 * @p: palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int check(int l, int r, char *p)
{
	if (l >= r)
		return (0);
	else if (p[l] != p[r])
		return (0);
	else
		return (check(l + 1, r - 1, p));
}
