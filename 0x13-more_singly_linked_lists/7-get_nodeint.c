#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer to head in function
 * @index: the node that will be returned
 *  Return: void node data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}
	if (index > nodes)
		return (NULL);
	temp = head;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
