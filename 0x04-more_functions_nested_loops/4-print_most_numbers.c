#include "main.h"
/**
 * print_most_numbers - prints all the numbers from 0-9 apart from 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
