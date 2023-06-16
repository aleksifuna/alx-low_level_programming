#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, uppercase then a new-line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l, u;

	l = 'a';
	u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
