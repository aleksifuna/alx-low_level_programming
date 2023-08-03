#include "main.h"
/**
 * print_binary - prints binary represantation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		print_binary(n / 2);
		_putchar((n % 2) + '0');
	}
}
