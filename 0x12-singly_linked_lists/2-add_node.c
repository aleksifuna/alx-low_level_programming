#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head list
 * @str: content of new node
 *
 * Return: Address of created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = temp = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
