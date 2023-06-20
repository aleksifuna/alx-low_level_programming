#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
