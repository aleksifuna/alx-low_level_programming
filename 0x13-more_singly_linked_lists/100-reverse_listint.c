#include "lists.h"
/**
 * reverse_listint - reverses a lsit
 * @head: pointer to head node
 *
 * Return: pointer to head node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *following;

	if (*head == NULL || head == NULL)
		return (NULL);
	current = *head;
	if (current->next == NULL)
		return (current);
	following = current->next;
	current->next = NULL;
	*head = following->next;
	following->next = current;
	current = following;
	while (current->next != NULL)
	{
		following = *head;
		*head = following->next;
		following->next = current;
		if (*head == NULL)
		{
			*head = following;
			return (*head);
		}
		current = following;
	}
	return (current);
}
