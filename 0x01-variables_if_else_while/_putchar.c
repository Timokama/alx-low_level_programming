#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to point
 *
 * Return: on success 1
 * on errer, -1 is returned, and error no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
