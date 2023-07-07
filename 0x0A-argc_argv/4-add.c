#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * dig_check - checks if a string has digits
 * @str: string to be checked.
 *
 * Return: 1 or 0.
 */
int dig_check(char *str)
{
	unsigned int k;

	for (k = 0; k < strlen(str); k++)
	{
		if (!isdigit(str[k]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (dig_check(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
