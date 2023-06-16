#include <stdio.h>

/**
 * main - prints all the alphabet in reserse and lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
