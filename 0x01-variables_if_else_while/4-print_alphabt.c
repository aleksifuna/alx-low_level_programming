#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and skips 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}

		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
