#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: Pointer to the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			free_node = head;
			head = head->next;
			free(free_node);
		}
	}
}
