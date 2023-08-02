#include "lists.h"
/**
 * reverse_listint - reverses a lsit
 * @head: pointer to head node
 *
 * Return: pointer to head node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *following;

	prev = NULL;
	following = NULL;
	while (*head)
	{
		following = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = following;
	}
	*head = prev;
	return (*head);
}
