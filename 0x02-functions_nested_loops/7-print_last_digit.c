#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number input.
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = ((n * -1) % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
