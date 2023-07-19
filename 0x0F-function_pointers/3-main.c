#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - does math  calculations on two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*calculation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calculation = get_op_func(argv[2]);
	if (calculation != NULL)
	{
		printf("%d\n", calculation(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
