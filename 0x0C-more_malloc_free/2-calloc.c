#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0)
	return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;
	return (str);
}
