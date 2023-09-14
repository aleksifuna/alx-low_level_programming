#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to head node
 * @n: element to add on the list
 *
 * Return: pointer to the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
