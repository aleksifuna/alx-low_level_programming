#include "main.h"
/**
 * print_times_table - prints n time table starting with 0.
 * @n: input
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(k + '0');
				}
				else if (k > 9 && k < 100)
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
				if (j < (n - 1))
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
