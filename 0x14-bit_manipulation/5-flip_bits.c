#include "main.h"
/**
 * flip_bits - finds the number of bits to flip
 * @n: one integer
 * @m: other integer
 *
 * Return: number of integers we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits, i, count;

	bits = sizeof(unsigned long int) * 8;
	count = 0;
	for (i = bits; i > 0; i--)
	{
		if (((n >> (i - 1)) & 1) != ((m >> (i - 1)) & 1))
			count++;
	}
	return (count);
}
