#include "main.h"
/**
 * print_rec - prints binary representation of a number
 * @k: the number
 */
void print_rec(unsigned long int k)
{
	if (k == 0)
	{
		return;
	}
	else
	{
		print_rec(k / 2);
		_putchar((k % 2) + '0');
	}
}
/**
 * print_binary - prints binary represantation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	if (n <= 0)
	{
		_putchar('0');
		return;
	}
	print_rec(n);
}
