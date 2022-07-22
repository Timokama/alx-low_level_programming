#include <unistd.h>
/**
 * _putchar - write the character c
 * @c: the character to print
 *
 * Return: ...
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
