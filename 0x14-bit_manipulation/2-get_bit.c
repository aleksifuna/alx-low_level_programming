#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to find the bit
 * @index: index for the bit
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
