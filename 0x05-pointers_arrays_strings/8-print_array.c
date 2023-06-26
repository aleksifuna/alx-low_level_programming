#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followed by new line
 * @a: Array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
				printf(", ");
			else
				printf("\n");
		}
	}
}
