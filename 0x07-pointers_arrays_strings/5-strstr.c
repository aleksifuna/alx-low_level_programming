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
	int i, j, flag;

	char *sb = NULL;

	flag = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				else
				{
					sb = &haystack[i];
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	return (sb);
}
