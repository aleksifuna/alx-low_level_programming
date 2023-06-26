#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: String to print.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int i, j, count;

	count = 0;

	while (s[count] != '\0')
		count++;
	i = 0;
	j = count - 1;

	while (j >= i)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
