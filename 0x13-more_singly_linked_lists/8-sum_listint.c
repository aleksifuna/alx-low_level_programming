#include "lists.h"
/**
 * sum_listint - sums all the data of a list
 * @head: pointer to head node.
 *
 * Return: sum of all the data of alist
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
