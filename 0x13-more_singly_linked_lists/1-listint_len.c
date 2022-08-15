#include "lists.h"
/**
 * listint_len - shows the number of node of a listint_t list.
 * @h: pointer to the header address
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (1);
}
