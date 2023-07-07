#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments passed.
 * @argv: pointer to arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
