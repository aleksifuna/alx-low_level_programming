#include "main.h"
/**
 * print_times_table - prints n time table starting with 0.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = j * i;
				if (k < 10)
				{
					_putchar(k + '0');
				}
				else if (k < 100 && k > 9)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar(((k % 100) % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (j == n)
				{
					_putchar('\n');
				}
				j++;
			}
			i++;
		}
	}
}
