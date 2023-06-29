#include <string.h>

/**
 * _strncat - concatinates second string onto first string upto n bytes.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

	l1 = strlen(src);
	l2 = strlen(dest);

	if (n > l1)
		n = l1;
	for (i = 0; i < n; i++)
		dest[l2 + i] = src[i];
	return (dest);
}
