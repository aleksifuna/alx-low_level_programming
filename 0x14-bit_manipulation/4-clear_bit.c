#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer to the integer
 * @index: index to set to 0
 *
 * Return: 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (*n & (1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
