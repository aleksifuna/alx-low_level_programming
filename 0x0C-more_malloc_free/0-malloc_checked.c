#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory block to be assigned.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	else
		return (malloc(b));
}
