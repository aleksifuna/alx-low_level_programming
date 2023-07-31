#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to head
 * @n: integer to be added in a new node.
 *
 * Return: the address of the new element of NULL if fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	new->next = *head;
	*head = new;
	return (*head);
}
