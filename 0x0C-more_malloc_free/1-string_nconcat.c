#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatinates two strings upto n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: Pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < strlen(s1); i++)
	{
		str[j] = s1[i];
		j++;
	}
	for (k = 0; k < n; k++)
	{
		str[j] = s2[k];
		j++;
	}
	str[j] = '\0';
	return (str);
}
