#include "lists.h"
/**
 * sum_listint -  returns the sum of all nodes
 * @head: pointer to head in function
 * Return: the sum result
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

