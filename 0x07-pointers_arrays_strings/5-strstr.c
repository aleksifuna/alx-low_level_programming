#include <string.h>
/**
 * _strstr - function to locate a substring
 * @haystack: string to locate a substring.
 * @needle: substring
 *
 * Return: pointer to first element of the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
