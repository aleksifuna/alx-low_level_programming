#include "hash_tables.h"
/**
 * key_index - calculates the index of a given key
 * @key: represent a key that needs the index
 * @size: size of the array
 *
 * Return: index corresponding to the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
