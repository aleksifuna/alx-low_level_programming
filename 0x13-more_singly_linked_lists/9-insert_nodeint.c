#include "lists.h"
/**
 * count_node - counts a node
 * @head: pointer to head node
 *
 * Return: number of nodes
 */
unsigned int count_node(listint_t *head)
{
	unsigned int node;
	listint_t *temp;

	node = 0;
	temp = head;
	while (temp)
	{
		node++;
		temp = temp->next;
	}
	return (node);
}
/**
 * insert_nodeint_at_index - inserts a node at index.
 * @head: pointer to head node
 * @idx: index to where to insert the node
 * @n: data for the node
 *
 * Return: address to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int count, i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	count = count_node(*head);
	if (idx > count)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	temp = *head;
	for (i = 0; i < count; i++)
	{
		if (i == idx - 1)
		{
			if (idx == count)
			{
				new->next = NULL;
				temp->next = new;
				return (new);
			}
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
