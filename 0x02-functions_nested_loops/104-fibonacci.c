#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	unsigned long long int i,k,j;
	int count;


	i = 1;
	j = 2;
	printf("%llu, %llu, ", i, j);
	count = 0;
	while (count < 96)
	{
		k = i + j;
		i = j;
		j = k;

		if(count < 95)
			printf("%llu, ", k);
		else
			printf("%llu\n", k);
		count++;
	}
	return (0);
}

