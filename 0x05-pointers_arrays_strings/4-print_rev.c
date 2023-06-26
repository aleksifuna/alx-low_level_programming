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
	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	for (j = count; j >= 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
