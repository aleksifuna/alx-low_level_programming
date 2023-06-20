#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0;
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = j * i;
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k/10) + '0');
				_putchar((k%10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
