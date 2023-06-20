#include <stdio.h>
/**
 * print_to_98 - prints all nutural numbers from a given starting point to 98
 * @n: number input to start from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
