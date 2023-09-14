#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t nodes;

	current = (dlistint_t *)h;
	nodes = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
