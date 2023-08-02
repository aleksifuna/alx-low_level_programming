#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to head node
 * @index: index of node to delete
 *
 * Return: 1 on success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	count = 0;
	while (temp->next != NULL)
	{
		if (count == index - 1)
		{
			del = temp->next;
			if (del->next == NULL)
			{
				temp->next = NULL;
				free(del);
				return (1);
			}
			temp->next = del->next;
			free(del);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
