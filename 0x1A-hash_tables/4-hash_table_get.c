#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key for the value
 *
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL || *key == '\n')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	if (strcmp(node->key, key) == 0 && node->next == NULL)
		return (node->value);
	tmp = node->next;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
