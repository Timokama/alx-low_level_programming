#include "lists.h"
/**
 * printBefore - free memory of all list.
 * void: pointer tpo head in function
 * Return: Always success
 */
void printBefore(void) __attribute__ ((constructor));

void printBefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}