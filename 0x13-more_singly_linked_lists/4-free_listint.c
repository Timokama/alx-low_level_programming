#include "lists.h"
/**
 * free_listint - free memory of all list.
 * @head: pointer to head in function
 * Return: Always success.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
