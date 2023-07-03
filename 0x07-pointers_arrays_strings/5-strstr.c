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
	long unsigned int i, j;

	char *sb = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (( j + 1) == strlen(needle))
			{
				sb = &haystack[i];
				break;
			}
		}
	}
	return (sb);
}
