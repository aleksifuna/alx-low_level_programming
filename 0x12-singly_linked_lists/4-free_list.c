#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
