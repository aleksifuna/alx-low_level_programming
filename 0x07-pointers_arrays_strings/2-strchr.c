#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: NULL or pointer to first occurance.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	char *t = NULL;

	i = strlen(s);
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			t = (&s[j]);
			break;
		}
	}
	return (t);
}
