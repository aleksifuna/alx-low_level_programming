#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and either positive negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%i is zero\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
