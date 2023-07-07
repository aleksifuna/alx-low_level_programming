#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds postive integers.
 * @argc: number of positive numbers to be added
 * @argv: numbers to be added.
 *
 * Return: 0 if successful else 1.
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
