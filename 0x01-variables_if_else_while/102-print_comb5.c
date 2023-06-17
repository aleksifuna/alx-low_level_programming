#include <stdio.h>

/**
 * main - prints all combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f_digits, l_digits;

	while (f_digits <= 99)
	{
		l_digits = f_digits;
		while (l_digits <= 99)
		{
			if (l_digits != f_digits)
			{
				putchar((f_digits / 10) + 48);
				putchar((f_digits % 10) + 48);
				putchar(' ');
				putchar((l_digits / 10) + 48);
				putchar((l_digits % 10) + 48);
				if (f_digits != 98 || l_digits != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			l_digits++;
		}
		f_digits++;
	}
	putchar('\n');
	return (0);
}
