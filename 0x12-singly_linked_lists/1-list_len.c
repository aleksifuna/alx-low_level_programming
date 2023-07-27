#include "lists.h"
/**
 * list_len - counts the number of elements in a list
 * @h: pointer to head element
 *
 * Return: number of elements in a list.
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *temp;

	count = 0;
	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
