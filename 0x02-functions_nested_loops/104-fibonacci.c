#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	unsigned long int i, k, j;
	int count;


	i = 1;
	j = 2;
	printf("%lu, %lu, ", i, j);
	count = 0;
	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if (count < 95)
			printf("%lu, ", k);
		else
			printf("%lu\n", k);
		count++;
	}
	return (0);
}

