#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string input
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j, length;

	length = 0;
	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
	{
		i = length / 2;
		j = length;
	}
	else
	{
		i = (length / 2) + 1;
		j = length;
	}
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
