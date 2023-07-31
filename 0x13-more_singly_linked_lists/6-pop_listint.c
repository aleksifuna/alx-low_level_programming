#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head node
 *
 * Return: headnode data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
