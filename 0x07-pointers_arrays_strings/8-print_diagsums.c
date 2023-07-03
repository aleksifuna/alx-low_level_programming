#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a sqr matrix
 * of an integer.
 * @a: pointer to the square matrix.
 * @size:size of square array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
		sum1 = sum1 + a[i *size + i]; 
	for (i = size - 1; i >= 0; i--)
		sum2 = sum2 + a[i * size + (size - i - 1)];
	printf("%d, %d\n", sum1, sum2);
}
