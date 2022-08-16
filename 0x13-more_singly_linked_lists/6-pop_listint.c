#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t
 * @head: pointer to head in function
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	new_node = (*head)->next;
	a = (*head)->n;
	free(*head);
	(*head) = new_node;
	return (a);
}
