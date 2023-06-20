#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet x10 in lower case followed by a
 * new line.
 *
 * retun: Void
 */
void print_alphabet_x10(void)
{
	int x;
	char a;

	x = 0;
	while (x < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		x++;
		_putchar('\n');
	}
}
