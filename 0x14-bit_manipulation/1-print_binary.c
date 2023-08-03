#include "main.h"
/**
 * print_binary - prints binary represantation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i, bits, leadingzero, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	leadingzero = 1;
	bits = sizeof(n) * 8;
	for (i = bits; i > 0; i--)
	{
		bit = (n >> (i - 1)) & 1;
		if (bit || !leadingzero)
		{
			_putchar('0' + bit);
			leadingzero = 0;
		}
	}
}
