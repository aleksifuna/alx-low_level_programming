#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a list
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;
	dlistint_t *current;

	nodes = 0;
	current = (dlistint_t *)h;
	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
