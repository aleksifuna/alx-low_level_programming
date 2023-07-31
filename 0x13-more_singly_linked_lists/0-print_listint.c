#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to first element
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
