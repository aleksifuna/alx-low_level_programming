#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head address
 * @index: the index of node to delete
 *
 * Return: 1 on success and -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *current;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	idx = 0;
	if (index == 0 && current->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	if (index == 0)
	{
		current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	while (current->next != NULL)
	{
		if (index == idx)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		idx++;
		current = current->next;
	}
	if (index == idx)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
