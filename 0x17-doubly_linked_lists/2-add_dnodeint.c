#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: pointer to head node
 * @n: element to add in the list
 *
 * Return: pointer to newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
