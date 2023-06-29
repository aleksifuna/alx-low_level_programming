#include <string.h>

/**
 * _strncpy - function that copies a string upto the nth element.
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters to copy to.
 *
 * Return: destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
