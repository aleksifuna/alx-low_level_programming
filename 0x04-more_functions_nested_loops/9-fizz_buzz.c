#include <stdio.h>
/**
 * main - prints the numbers from 1-100 with fuzz instead of any multiple of 3
 * buzz instead of any multiple of 5 and fizzBuzz instead of any multiple of
 * both 3 and 5.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
