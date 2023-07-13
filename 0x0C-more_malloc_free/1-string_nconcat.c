#include <stdlib.h>
/**
 * _strlen - returns length of string
 * @string: string input
 *
 * Return: length of a string
 */
unsigned int _strlen(char *string)
{
	unsigned int k;

	k = 0;
	while (*string != '\0')
	{
		k++;
		string++;
	}
	return (k);
}
/**
 * string_nconcat - function that concatinates two strings upto b bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: Pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	str = malloc(_strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < _strlen(s1); i++)
	{
		str[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = '\0';
	return (str);
}
