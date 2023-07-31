#include "lists.h"
/**
 * listint_len - counts the number of elements in a list
 * @h: address to first element
 *
 * Return: number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	len = 0;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
