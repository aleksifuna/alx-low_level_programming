#include "main.h"
/**
 * puts2 - prints every other character of a string with the first character,
 * followed by a line line.
 * @str: string input
 *
 * Return: Void
 */
void puts2(char *str)
{
	int i, j, count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	i = 0;
	j = count - 1;

	while (i < j)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
