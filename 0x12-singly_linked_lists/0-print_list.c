#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to head
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] [%s]\n", 0, "(nil)");
		else
			printf("[%d] [%s]\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}

