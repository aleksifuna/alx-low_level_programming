#include <stdio.h>
#include <stdlib.h>
/**
 * change - returns the number of change.
 * @num: number to check.
 *
 * Return: number of change.
 */
int change(int num)
{
	if (num == 0)
		return (0);
	else if (num % 25 == 0)
		return (1 + change(num - 25));
	else if (num % 10 == 0)
		return (1 + change(num - 10));
	else if (num % 5 == 0)
		return (1 + change(num - 5));
	else if (num % 2 == 0)
		return (1 + change(num - 2));
	else if (num % 1 == 0)
		return (1 + change(num - 1));
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", change(atoi(argv[1])));
		return (0);
	}
}
