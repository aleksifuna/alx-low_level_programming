#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate of str or NULL
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
