#include "lists.h"
/**
 * sum_dlistint - sums all the data of a linked list
 * @head: pointer to head node
 *
 * Return: sum of of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
