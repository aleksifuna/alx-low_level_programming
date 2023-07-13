#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory block to be assigned.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *c;
	c = malloc(b);
	if (c == NULL)
		exit(98);
	else
		return (c);
}
