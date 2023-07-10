#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatinated string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2) + 1;
	s = malloc(len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
		s[i + j] = s2[j];
	s[len] = '\0';
	return (s);
}
