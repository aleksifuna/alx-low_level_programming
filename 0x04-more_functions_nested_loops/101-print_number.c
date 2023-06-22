#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');

