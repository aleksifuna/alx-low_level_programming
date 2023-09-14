#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index to insert new node
 * @n: number to insert at the position
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index;
	dlistint_t *new, *current;

	current = *h;
	index = 0;
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (current != NULL)
	{
		if (index == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		index++;
		current = current->next;
	}
	if (current == NULL && index == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
