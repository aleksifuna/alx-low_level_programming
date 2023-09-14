#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index
 * @head: pointer to head node
 * @index: index of node
 *
 * Return: nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx;

	idx = 0;
	current = head;
	while (current != NULL)
	{
		if (idx == index)
			return (current);
		current = current->next;
		idx++;
	}
	return (NULL);
}
