#include <stdio.h>

/**
 * main - compute and prints all even fibonacci below 4,000,000.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, j, sum, k;

	i = 1;
	j = 2;

	sum = 2;
	k = 0;
	while (k <= 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
		{
			sum = sum + k;
		}
		i = j;
		j = k;
	}
	printf("%ld\n", sum);
	return (0);
}
