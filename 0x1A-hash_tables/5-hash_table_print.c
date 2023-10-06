#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hast table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag;

	if (ht == NULL)
		return;
	printf("{");
	flag = 1;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag == 1)
			{
				printf("'%s': '%s'", current->key, current->value);
				flag = 0;
			}
			else
			{
				printf(", '%s': '%s'", current->key, current->value);
			}
			current = current->next;
		}
	}
	printf("}\n");
}
