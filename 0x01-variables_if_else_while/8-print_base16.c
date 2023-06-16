#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, h;

	i = 0;
	h = 0;
	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(h + 'a');
			h++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
