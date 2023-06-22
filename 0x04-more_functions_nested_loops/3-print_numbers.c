#include "main.h"
/**
 * print_numbers - prints the numbers 0-9.
 *
 * return: void.
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
