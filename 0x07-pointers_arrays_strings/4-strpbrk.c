#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to match
 *
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *ret = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ret = &s[i];
				break;
			}
		}
		if (ret != NULL)
			break;
	}
	return (ret);
}
