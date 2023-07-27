#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head node.
 * @str: content of new node.
 *
 * Return: address to new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
