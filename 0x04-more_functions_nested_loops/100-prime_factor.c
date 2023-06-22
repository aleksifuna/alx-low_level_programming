#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143. followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, j, max;

	j = 612852475143;

	max =- 1;

	while (j % 2 == 0)
	{
		max = 2;

		j /= 2;
	}
	for (i = 3; i <= sqrt(j); i = i + 2)
		while (j % i == 0)
		{
			max = i;
			j = j / i;
		}
	if (j > 2)
		max = j;
	printf("%ld\n", max);

	return (0);
}
