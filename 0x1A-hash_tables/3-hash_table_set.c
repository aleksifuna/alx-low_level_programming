#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: non empty string key
 * @value: value associated with key
 *
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new_node;

	if (strlen(key) == 0)
		return (0);
	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	node = ht->array[index];
	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		node->key = malloc(strlen(key) + 1);
		strcpy(node->key, key);
		node->value = malloc(strlen(value) + 1);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else if (strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = malloc(strlen(value));
		strcpy(node->value, value);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = malloc(strlen(key) + 1);
		strcpy(new_node->key, key);
		new_node->value = malloc(strlen(value) + 1);
		strcpy(new_node->value, value);
		new_node->next = node;
		ht->array[index] = new_node;
	}
	return (1);
}
