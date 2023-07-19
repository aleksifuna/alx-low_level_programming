#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its main function
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *oppc;
	int i;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error");
		exit(2);
	}
	oppc = (char *)main;
	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i == (atoi(argv[1]) - 1))
			printf("%02hhx\n", oppc[i]);

		else
			printf("%02hhx ", oppc[i]);
	}

	return (0);
}
