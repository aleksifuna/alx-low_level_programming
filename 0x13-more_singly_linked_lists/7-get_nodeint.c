#include "lists.h"
/**
 * get_nodeint_at_index - returns the address to the nth node
 * head: address to head node
 * index: index of node starting at 0
 *
 * Return: address to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
