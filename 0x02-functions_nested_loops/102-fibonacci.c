#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	long int i, j, c, d;

	i = 1;
	j = 2;
	c = 0;

	printf("%ld, %ld, ", i, j);
	while (c <= 48)
	{
		d = i + j;
		i = j;
		j = d;
		if (c == 48)
			printf("%ld\n", d);
		else
			printf("%ld, ", d);
		c++;
	}
	return (0);
}
